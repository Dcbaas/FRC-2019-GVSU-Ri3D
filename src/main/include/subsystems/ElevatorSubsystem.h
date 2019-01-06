//NEED to update channel values for each of the private SparkMax objects
//Double check private Encloder object. Confused on the 4 members needed in normal constructor.

#pragma once

#include "libraries/SparkMax.h"
#include "frc/Encoder.h"

namespace Elevator 
{
  class ElevatorSubsystem : public frc::Subsystem{
    public:
      ElevatorSubsystem();
      void InitDefaultCommand() override;
      
      void MoveUp(double speed);
      void MoveDown(double speed);

    private:
      SparkMax(5);    //False Channel valudes...
      SparkMax(6);    //False Channel values...
      Encoder();
      int height;
  };
}



