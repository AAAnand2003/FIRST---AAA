#include "Robot.h"
Robot::Robot()
: drive(LEFT_CAN, RIGHT_CAN),
control(USB_PORT)
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
}

void Robot::TestPeriodic() {}

int main()
{

 return frc::StartRobot<Robot>(); 
}