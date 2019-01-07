#include "subsystems\VisionSystem.h"
#include "cscore.h"
#include <frc/WPILib.h>

namespace Camera{
    AligmentCamera::AligmentCamera() : frc::Subsystem("AligmentCamera"){
        camera = frc::CameraServer::GetInstance()->StartAutomaticCapture();
        camera.SetResolution(640,480);
        cameraSink = frc::CameraServer::GetInstance()->GetVideo();
    }

    int AligmentCamera::findDistance(){
        cameraSink.GrabFrame(sourceFrame);
        processPipline.Process(sourceFrame);
        return processPipline.getDistance();
    }
}

