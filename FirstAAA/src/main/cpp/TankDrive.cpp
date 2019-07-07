#include "TankDrive.h"

TankDrive::TankDrive(int leftTalon, int rightTalon ) 
: lTal(leftTalon),
rTal(rightTalon)

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

