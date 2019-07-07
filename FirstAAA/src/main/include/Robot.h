#pragma once

#include <frc/IterativeRobot.h>
#include "Prefs.h"
#include "TankDrive.h"
#include <frc/Joystick.h>

class Robot : public frc::IterativeRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;
  Robot();

 private:
 TankDrive drive;
 frc::Joystick control;

 
 
};
