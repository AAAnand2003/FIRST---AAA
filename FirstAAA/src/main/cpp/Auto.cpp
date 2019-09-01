#include "Auto.h"

Auto::Auto(TankDrive * DObj) 
: TDrive(DObj),
a_AState(kAutoFoward)

{

}

 void Auto::AutoDrive() 
 {
     switch(a_AState) 
{ 
    case kAutoFoward:
    TDrive-> leftDrive (0.3);
    TDrive-> rightDrive (0.3);
    
    if((TDrive-> getl + TDrive-> getr ) / 2)
}


 }