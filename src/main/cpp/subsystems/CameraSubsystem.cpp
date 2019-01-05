#include "subsystems/CameraSubsystem.h"
#include "frc/WPILib.h"
#include "RobotMap.h"

namespace Camera
{
    CameraSubsystem::CameraSubsystem() : frc::Subsystem("CameraSubsystem")
    {
        camera = frc::CameraServer::GetInstance->StartAutomaticCapture("cam0");
    }

    void CameraSubsystem::InitDefaultCommand()
    {

    }
} // namespace CameraSubsystem
