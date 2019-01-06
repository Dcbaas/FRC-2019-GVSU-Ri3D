/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
namespace Claw
{
class ClawSubsystem : public frc::Subsystem
{
  private:
    void SetHatchPosition();
    void SetCargoPosition();
    void SetOpenPosition();

  public:
    ClawSubsystem();
    void InitDefaultCommand() override;
};
}