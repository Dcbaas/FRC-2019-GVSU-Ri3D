#include "commands/DriveCommand.h"

#include "Robot.h"

DriveCommand::DriveCommand() {
  // Use Requires() here to declare subsystem dependencies
  Requires(&Robot::driveSubsystem);
}

// Called just before this Command runs the first time
void DriveCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void DriveCommand::Execute() {
    const double left = -1 * Robot::m_oi.driveStick.GetAxis(frc::Joystick::AxisType::kYAxis);
    const double right = -1 * Robot::m_oi.driveStick.GetAxis(frc::Joystick::AxisType::kZAxis);
    Robot::driveSubsystem.TankDrive(left, right);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveCommand::IsFinished() { return false; }

// Called once after isFinished returns true
void DriveCommand::End() {
    Robot::driveSubsystem.Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveCommand::Interrupted() {
    DriveCommand::End();
}