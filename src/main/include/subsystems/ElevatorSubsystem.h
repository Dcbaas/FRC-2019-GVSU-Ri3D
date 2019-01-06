//NEED to update channel values for each of the private SparkMax objects
//Double check private Encloder object. Confused on the 4 members needed in normal constructor.

#pragma once

#include "libraries/SparkMax.h"
#include <Encoder.h>

namespace Elevator 
{
  class ElevatorSubsystem : public frc::Subsystem{
    public:
      ElevatorSubsystem();
      void InitDefaultCommand() override;
      
      void MoveUp(double speed);
      void MoveDown(double speed);

    private:
      SparkMax LeftMotor{5};    //False Channel valudes...
      SparkMax RightMotor{6};    //False Channel values...
      Encoder ElevatorEncoder;
      int height;
  };
}



