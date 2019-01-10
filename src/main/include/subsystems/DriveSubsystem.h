#pragma once

#include <rev/CANSparkMax.h>
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
  rev::CANSparkMax frontLeft{6, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax backLeft{5, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax frontRight{3, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax backRight{4, rev::CANSparkMax::MotorType::kBrushless};
  frc::SpeedControllerGroup left{frontLeft, backLeft};
  frc::SpeedControllerGroup right{frontRight, backRight};
  frc::DifferentialDrive robotDrive{left, right};

  const double LIMITER = 0.50;

  DriveCommand* driveCommand;
};
