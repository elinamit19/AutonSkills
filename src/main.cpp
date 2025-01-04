/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       inbox                                                     */
/*    Created:      12/23/2024, 2:58:14 PM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include "robotconfig.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here
extern void DistanceCoder(void);
extern void InertialTurnHeading(void);
extern void ScoreRings(void);
int main() {
conveyor.spinFor(reverse, 2000, degrees, 150, rpm);
moveDistance(12.0);
InertialTurnHeading(90.0);
moveDistance(-24.0);
hook.set(true);
InertialTurnHeading(-90.0);
moveDistance(24.0);
ScoreRings();




   
}
