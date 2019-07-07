#pragma once

#include <ctre/Phoenix.h>
#include <frc/DigitalOutput.h>

class NerfShooter
{
    public:
        NerfShooter(int elevator, int triggerChannel);
        void move(double direction);
        void shoot(bool fire);
    private:
        WPI_TalonSRX eTalon;
        frc::DigitalOutput trigger;
};