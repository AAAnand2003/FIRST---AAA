#pragma once
#include <ctre/Phoenix.h>
#include <frcEncorder.h>
class TankDrive
{ 
    public: 
    TankDrive( int leftTalon, int rightTalon, int lEnc1, int lEnc2, int rEnc1, int rEnc2); 
    void leftDrive (float leftTal);
    void rightDrive (float rightTal);
    int getl();
    int getr();


    private: 
    WPI_TalonSRX lTal;
    WPI_TalonSRX rTal;
    frc::Encorder lEnc;
    frc::Encorder rEnc;


};