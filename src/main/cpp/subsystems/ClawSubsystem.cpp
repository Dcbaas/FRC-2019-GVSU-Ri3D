/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/ClawSubsystem.h"

namespace Claw
{
ClawSubsystem::ClawSubsystem() : Subsystem("ExampleSubsystem") {}

void ClawSubsystem::InitDefaultCommand()
{
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
}

void ClawSubsystem::SetClose(){
    leftSolenoid.Set(true);
    rightSolenoid.Set(true);
}

void ClawSubsystem::SetOpen(){
    leftSolenoid.Set(false);
    rightSolenoid.Set(false);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

} // namespace Claw