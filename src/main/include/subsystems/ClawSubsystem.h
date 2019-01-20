/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/Solenoid.h> 
namespace Claw
{
  class ClawSubsystem : public frc::Subsystem{
    public:
      ClawSubsystem();
      void InitDefaultCommand() override;
      
      void SetOpen();
      void SetClose();
      void Push(bool open);

    private:
      frc::Solenoid clawSolenoid{0,0};
      frc::Solenoid pushSolenoid{0,1};
  };
}