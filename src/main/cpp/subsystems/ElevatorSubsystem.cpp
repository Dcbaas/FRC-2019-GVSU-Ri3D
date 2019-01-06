

#include "subsystems/ElevatorSubsystem.h"

namespace Elevator
{
ElevatorSubsystem::ElevatorSubsystem() : Subsystem("ExampleSubsystem") {}

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