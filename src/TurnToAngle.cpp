#include "vex.h"
#include "robotconfig.h"
using namespace vex;
// Define the robot's configuration
// Constants
// Constants


// Function to rotate the robot by a given angle


// Constants
const double TRACK_WIDTH = 18; // in inches
const double WHEEL_DIAMETER = 4.0; // in inches
const double WHEEL_CIRCUMFERENCE = 3.1416 * WHEEL_DIAMETER;
const double INCHES_PER_DEGREE = (3.1416 * TRACK_WIDTH) / 360.0;
const double CORRECTION_FACTOR = 0.95; // Scale factor to reduce overshooting

// Function to rotate the robot by a given angle
void turnToAngle(double degrees) {
    // Calculate rotations needed for the wheels with correction factor
    double rotationsToMove = ((degrees * INCHES_PER_DEGREE) / WHEEL_CIRCUMFERENCE) * CORRECTION_FACTOR;

    // Reset motor positions
    LeftMotor1.resetPosition();
    LeftMotor2.resetPosition();
    RightMotor1.resetPosition();
    RightMotor2.resetPosition();

    // Start motors: left side backward, right side forward
    LeftMotor1.spinFor(reverse, rotationsToMove, rotationUnits::rev, false);
    LeftMotor2.spinFor(reverse, rotationsToMove, rotationUnits::rev, false);
    RightMotor1.spinFor(forward, rotationsToMove, rotationUnits::rev, false);
    RightMotor2.spinFor(forward, rotationsToMove, rotationUnits::rev, true);
}

