#include "NerfShooter.h"

NerfShooter::NerfShooter(int elevator, int triggerChannel)
:eTalon(elevator),
trigger(triggerChannel)
{

}

void NerfShooter::move(double direction)
{
    eTalon.Set(direction);
}

void NerfShooter::shoot(bool fire)
{
    trigger.Set(fire);
}