#include "TankDrive.h"

TankDrive::TankDrive(int leftTalon, int rightTalon, int lEnc1, int lEnc2, int rEnc1, int rEnc2 ) 
: lTal(leftTalon),
rTal(rightTalon),
lEnc (lEnc1 , lEnc2),
rEnc (rEnc1 , rEnc2)

{

}

void TankDrive::leftDrive(float left)
{
   lTal.Set(left*-1);   
}

void TankDrive::rightDrive(float right)
{
    rTal.Set(right);
}

int TankDrive::getl() 
{
    return lEnc.get();
}

int TankDrive::getr() 
{
    return rEnc.get();
}
