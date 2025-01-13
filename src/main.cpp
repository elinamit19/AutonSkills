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
extern void turnToAngle(void);
extern void ScoreRings(void);
int main() {
hook.set(false);
moveDistance(12);
turnToAngle(-50);
moveDistance(-24);
hook.set(true);
moveDistance(-24);
turnToAngle(25);
moveDistance(-24);




}
