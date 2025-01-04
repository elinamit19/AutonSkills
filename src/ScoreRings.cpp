#include "vex.h"
#include "robotconfig.h"

using namespace vex;
 void ScoreRings(){
      // Activate the intake motor to grab rings
    intake.spin(forward);
    conveyor.spin(forward);

    task::sleep(6000);  // Allow time for intake and conveyor to grab the rings

    // Stop the intake and conveyor motors after collecting rings
    intake.stop();
    conveyor.stop();

 }