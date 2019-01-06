

#include "subsystems/ElevatorSubsystem.h"
#include "RobotMap.h"

namespace Elevator
{
ElevatorSubsystem::ElevatorSubsystem() : Subsystem("ExampleSubsystem")
{
    ElevatorEncoder = new frc::Encoder(kEncoderChannelA, kEncoderChannelB);
}

void ElevatorSubsystem::InitDefaultCommand()
{
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
}

void MoveUp(double speed)   {

}

void MoveDown(double speed) {

}

} // namespace Claw