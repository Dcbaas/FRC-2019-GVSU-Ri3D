#pragma once

#include <frc/commands/Subsystem.h>
#include "cscore.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>\

#include "libraries/GroundTapePipline.h"

namespace Camera{
    class AligmentCamera : public frc::Subsystem{
    public:
        AligmentCamera();
        void InitDefaultCommand() override{}
        int findDistance();
    private:
        cs::UsbCamera camera;
        cs::CvSink cameraSink;
        //cs::CvSource outStream;
        cv::Mat sourceFrame;
        grip::GroundTapePipline processPipline;
    };
}
