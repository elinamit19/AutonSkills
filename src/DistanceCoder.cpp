#include "vex.h"
#include "robotconfig.h"

using namespace vex;
const double WHEEL_DIAMETER = 3.25;  // Wheel diameter in inches
const double ENCODER_CPR = 360;     // Encoder counts per revolution (CPR)

// Function to move robot a specific distance
void moveDistance(double targetDistance) {
    // Calculate the number of encoder ticks needed for the target distance
    double wheelCircumference = 3.1416 * WHEEL_DIAMETER;
    int targetEncoderTicks = (targetDistance / wheelCircumference) * ENCODER_CPR;
      Leftmotorgroup.resetPosition();
    Rightmotorgroup.resetPosition();

    // Start motors and move until target encoder ticks are reached
    Leftmotorgroup.spin(forward);
    Rightmotorgroup.spin(forward);
       while (Leftmotorgroup.position(degrees) < targetEncoderTicks && Rightmotorgroup.position(degrees) < targetEncoderTicks) {
task::sleep(10);
    }
        Leftmotorgroup.stop(brake);
    Rightmotorgroup.stop(brake);
}
