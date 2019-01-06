#pragma once

#include "libraries/SparkMax.h"
#include "commands/DriveCommand.h"
#include <frc/commands/Subsystem.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/SpeedControllerGroup.h>

class DriveSubsystem : public frc::Subsystem {
 public:
  DriveSubsystem();
  void InitDefaultCommand() override;
  void TankDrive(double left, double right);
  void Stop();

 private:
  SparkMax frontLeft{0};
  SparkMax backLeft{1};
  SparkMax frontRight{2};
  SparkMax backRight{3};
  frc::SpeedControllerGroup left{frontLeft, backLeft};
  frc::SpeedControllerGroup right{frontRight, backRight};
  frc::DifferentialDrive robotDrive{left, right};

  DriveCommand* driveCommand;
};
