#pragma once

#include <frc/PWMSpeedController.h>

/**
 * REV Robotics SPARK MAX Motor Controller
 */

class SparkMax : public frc::PWMSpeedController {
    public:
    /**
     * Constructor for a SPARK MAX.
     *
     * @param channel The PWM channel that the SPARK MAX is attached to. 0-9 are
     *                on-board, 10-19 are on the MXP port
     */
    explicit SparkMax(int channel);

    SparkMax(SparkMax&&) = default;
    SparkMax& operator=(SparkMax&&) = default;
};