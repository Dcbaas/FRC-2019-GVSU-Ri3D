/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Joystick.h>     //Driving w/ Joystick
#include <JoystickButton.h>

class OI {
 public:
  OI();
  frc::Joystick driveStick{0};

  private:
  // see "Running commands on Joystick input" on WPIlib
	frc::JoystickButton* ClawOpen;
	frc::JoystickButton* ClawClose;

  //  Button functions for controller
  frc::JoystickButton* HatchOpen;   //Set Claw position to prepare to pick up Hatch
  frc::JoystickButton* HatchClose;  //Set Claw position to secure hatch
  frc::JoystickButton* CargoOpen;   //Set Claw position to prepare to pick up Cage
  frc::JoystickButton* CargoClose;  //Set Claw position to secure Cargo
  frc::JoystickButton* ClawRelease; //Trigger Solinoid to release vertical claw at start of match
  frc::JoystickButton* Align;       //Initiallize Autonomous system to align robot to ship/rocket
  frc::JoystickButton* Height1;     //Set Claw Height to Lv1 (1'7")
  frc::JoystickButton* Height2;	    //Set Claw Height to Lv2 (3'11")
  frc::JoystickButton* Height3;	    //Set Claw Height to Lv3 (6'3")
};
