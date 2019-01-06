#pragma once

#include <frc/commands/Subsystem.h>
#include <array>

#include "WPILib.h"
#include "AHRS.h"

//Todo: Make a seperate file to define ports and measurements.
//RobotMap
namespace NavigationSubsystem{
    class Navigation : public frc::Subsystem{
    public:
        Navigation();
        AHRS & getGyro() const;
        double getHeading() const;
        void resetGyro();
        inline void resetPosition() { x=0; y=0; }
        void updatePosition();
        std::array<double, 2>& getPosition();
        double getLeftPosition();
        double getRightPosition();

    private:
        AHRS* ahrs;
        int leftOffset{0};
        int rightOffset{0};
        double gyroOffset{0.0};
        double x;
        double y;

        double readGyro();

    };
}