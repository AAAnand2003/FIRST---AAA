#pragma once
#include "TankDrive.h"

enum AState
{
    kAutoIdle = 0,
    kAutoForward 
};

class Auto 
{
    public: 
    Auto(TankDrive * DObj);
    void AutoDrive();

    private:
    AState a_AState;
    TankDrive * TDrive;
    
};