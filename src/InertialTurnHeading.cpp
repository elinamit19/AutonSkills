#include "vex.h"
#include "robotconfig.h"

using namespace vex;

void InertialTurnHeading(double targetHeading) {
    // Get the current heading of the robot
    double currentHeading = intertialSensor.heading();
    
    // Normalize the error to ensure it's between -180 and 180 degrees
    double currentError = targetHeading - currentHeading;
    if (currentError > 180) {
        currentError -= 360;  // Turn left (counterclockwise)
    } else if (currentError < -180) {
        currentError += 360;  // Turn right (clockwise)
    }

    double Kp = 0.5;  // Proportional gain (can be adjusted for better control)
    double motorSpeed;

    // Rotate the robot until the error is small enough (within 4 degrees)
    while(fabs(currentError) > 4) {
        currentHeading = intertialSensor.heading();
        currentError = targetHeading - currentHeading;
        
        // Normalize the error again in case of a crossing over 360 degrees
        if (currentError > 180) {
            currentError -= 360;
        } else if (currentError < -180) {
            currentError += 360;
        }

        // Calculate motor speed based on the error
        motorSpeed = Kp * currentError;

        // Set the motor speeds: Left turns counterclockwise, Right turns clockwise
        Leftmotorgroup.spin(fwd, motorSpeed, pct);
        Rightmotorgroup.spin(fwd, -motorSpeed, pct);

        task::sleep(10);  // Small delay to allow for sensor updates and motor control
    }

    // Stop the motors when the target heading is reached
    Leftmotorgroup.stop(brake);
    Rightmotorgroup.stop(brake);
}