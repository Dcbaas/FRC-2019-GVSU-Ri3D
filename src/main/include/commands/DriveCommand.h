#pragma once

#include <frc/commands/Command.h>

class DriveCommand : public frc::Command {
 public:
  DriveCommand();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
