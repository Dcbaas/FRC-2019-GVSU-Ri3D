#include "libraries/SparkMax.h"
#include <hal/HAL.h>


SparkMax::SparkMax(int channel): PWMSpeedController(channel) {
    /*
     * Note that these values are 100% guessed. I have no idea what I am doing.
     */
    SetBounds(2.0033, 1.55, 1.5, 1.46, 0.999);
    SetPeriodMultiplier(kPeriodMultiplier_1X);
    SetSpeed(0.0);
    SetZeroLatch();

    HAL_Report(HALUsageReporting::kResourceType_RevSparkMaxPWM, GetChannel());
    SetName("SparkMax", GetChannel());
}