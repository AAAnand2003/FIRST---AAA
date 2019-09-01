#include "Robot.h"
Robot::Robot()
: drive(LEFT_CAN, RIGHT_CAN, LENC1, LENC2, RENC1, RENC2 ),           
control(USB_PORT),
shooter(NERF_ELEVATION, NERF_TRIGGER)
{

}

void Robot::RobotInit() {}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic()
{
 drive.leftDrive(control.GetRawAxis(LEFT_JOYSTICK));
 drive.rightDrive(control.GetRawAxis(RIGHT_JOYSTICK));
 
 if(control.GetRawButton (ELEVATION_UP_BUTTON)) {
 shooter.move(ELEVATE_SPEED);
 }

 else if(control.GetRawButton (ELEVATION_DOWN_BUTTON)) {
 shooter.move(ELEVATE_SPEED * -1);
 }

else {
    shooter.move(0);
}

if(control.GetRawButton (SHOOT_BUTTON)) {
 shooter.shoot(true);
 }
 else {
     shooter.shoot(false);
 }
}

void Robot::TestPeriodic() {}

int main()
{

 return frc::StartRobot<Robot>(); 
}