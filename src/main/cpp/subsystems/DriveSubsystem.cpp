#include "subsystems/DriveSubsystem.h"
#include "RobotMap.h"

DriveSubsystem::DriveSubsystem() : frc::Subsystem("DriveSubsystem") {
    this->backRight.SetInverted(true);
    this->frontRight.SetInverted(true);
}

void DriveSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DriveCommand());
}

void DriveSubsystem::TankDrive(double left, double right) {
    this->robotDrive.TankDrive(left, right);
}

void DriveSubsystem::Stop() {
    this->robotDrive.TankDrive(0, 0);
}
