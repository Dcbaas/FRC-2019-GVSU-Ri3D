#pragma once

//Define std
#include <array>
#include <mutex>
#include <cmath>

//Define frc
#include <frc/commands/Subsystem.h>

//Define third party and user made
#include "frc/WPILib.h"
#include <AHRS.h>

//Define PI as a constant. Is the same as Cs M_PI
#define PI 3.14159265358979323846264338327950288

//Todo: Make a seperate file to define ports and measurements.
//RobotMap
namespace NavigationSensor{
    class Navigation{
    public:
        Navigation();
        AHRS* getGyro();
        double getHeading();
        void resetGyro();
        inline void resetPosition() { x=0; y=0; }
        void updatePosition();
        std::array<double, 2>* getPosition();
        double getLeftPosition();
        double getRightPosition();

    private:
        AHRS* ahrs;
        int leftOffset{0};
        int rightOffset{0};
        double gyroOffset{0.0};
        double x;
        double y;
        int lastLeftEncoder{0};
        int lastRightEncoder{0};
        std::mutex lock;

        double readGyro(){ return 0;}
        double toRadians(double degreeVal){return degreeVal * (PI/180.0);}

    };
}