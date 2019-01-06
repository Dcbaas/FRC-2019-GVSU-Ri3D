#include <string>
#include <array>
#include <cmath>

#include "AHRS.h"
#include <frc/SPI.h>

#include "Navigation.h"



namespace NavigationSensor{
    
    Navigation::Navigation(){
        
        try{
            //Broken
            navX = new AHRS(SPI::Port::kMXP);
        }
        catch(std::exception ex){
            std::string err_string = "Error instantiating navX-MXP:  ";
            err_string += ex.what();
            DriverStation::ReportError(err_string.c_str());
        }
    }

    //Do we want to pass the whole AHRS object?
    // AHRS* Navigation::getGyro() {return ahrs;}

    /**
     * For the implementation of the getHeading function, I need to lock the gyro from being
     * changed while I access the value. In the Java code I referneceds they use java and
     * sycnronized. I use a mutex instead since that is the equivilant functionality.
     **/
    double Navigation::getHeading(){
        lock.lock();
        double currentHeading = readGyro() - gyroOffset;
        lock.unlock();
        return currentHeading;    
    }

    void Navigation::resetGyro(){gyroOffset = readGyro();}

    void Navigation::updatePosition(){
        int leftEncoder = 0; //Setup getLeftEncoder;
        int rightEncoder = 0; //Setup getRightEncoder;
        int changeLeftEncoder = leftEncoder - lastLeftEncoder;
        int changeRightEncoder = rightEncoder - lastRightEncoder;
        double averageChange = (changeLeftEncoder + changeRightEncoder) / 2.0;
        double heading = toRadians(getHeading());
        x += averageChange * std::cos(heading);
        y += averageChange * std::sin(heading);
        lastLeftEncoder = leftEncoder;
        lastRightEncoder = rightEncoder; 
    }

    std::array<double, 2>* Navigation::getPosition(){

        //Todo determine encoder ticks for x and y.
        return new std::array<double, 2>();
    }

    double Navigation::getLeftPosition(){
        //Todo determine encoder ticks
        return 0;
    }
    double Navigation::getRightPosition(){
        //Todo determine encoder ticks
        return 0;
    }

}