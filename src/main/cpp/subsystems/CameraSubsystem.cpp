#include "subsystems/CameraSubsystem.h"
#include "frc/WPILib.h"

namespace Camera
{
    CameraSubsystem::CameraSubsystem() : frc::Subsystem("CameraSubsystem")
    {
        camera = frc::CameraServer::GetInstance()->StartAutomaticCapture(0);
        cameraServer = frc::CameraServer::GetInstance()->GetServer();

        cameraServer.SetSource(camera);
    
    }

    void CameraSubsystem::InitDefaultCommand()
    {

    }
} // namespace CameraSubsystem
