#pragma once
#include <ctre/Phoenix.h>
class TankDrive
{ 
    public: 
    TankDrive( int leftTalon, int rightTalon ); 
    void leftDrive (float leftTal);
    void rightDrive (float rightTal);

    private: 
    WPI_TalonSRX lTal;
    WPI_TalonSRX rTal;

};