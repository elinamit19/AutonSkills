#include "vex.h"
#include "robotconfig.h"
using namespace vex;
using signature = vision::signature;
using code = vision::code;

controller Controller1 = controller(primary);
motor LeftMotor1 = motor(PORT1, ratio18_1, true);
motor LeftMotor2 = motor(PORT2, ratio18_1, true);
motor RightMotor1 = motor(PORT20, ratio18_1, false);
motor RightMotor2 = motor(PORT12, ratio18_1, false);
motor conveyor = motor(PORT10, ratio18_1, false);
motor intake = motor(PORT3, ratio18_1, false);
inertial intertialSensor = inertial(PORT8);
digital_out hook = digital_out(Brain.ThreeWirePort.A);
motor_group Rightmotorgroup = motor_group(RightMotor1, RightMotor2);
motor_group Leftmotorgroup = motor_group(LeftMotor1, LeftMotor2);

