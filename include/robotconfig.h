using namespace vex;
extern brain Brain;
// VEXcode devices

extern controller Controller1;
extern motor LeftMotor1;
extern motor LeftMotor2;
extern motor RightMotor1;
extern motor RightMotor2;
extern motor conveyor; 
extern motor intake;
extern motor_group Rightmotorgroup;
extern motor_group Leftmotorgroup;
extern digital_out hook;
extern inertial intertialSensor;

void vexcodeInit();
void InertialTurnHeading(double targetHeading);
void moveDistance(double targetDistance);
