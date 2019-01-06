#pragma once

#include <frc/commands/Subsystem.h>
#include "cscore.h"

namespace Camera
{
    class CameraSubsystem : public frc::Subsystem
    {
    public:
        CameraSubsystem();
        void InitDefaultCommand() override;

    private:
        cs::UsbCamera camera;
        cs::VideoSink cameraServer;
    };
}; // namespace CameraSubsystem