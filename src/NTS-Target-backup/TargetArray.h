//Include guards
#ifndef TARGETARRAY_H
#define TARGETARRAY_H

//Built-in Imports
#include <Arduino.h>

//Common imports

//Custom imports
#include "Target.h"

//Constants
const uint8_t _numberOfTargetsInTargetArray = 5;


//Configure the targets that are in the target array
//The layout of the target array
//  -------------------
//  |  +  +  +  +  +  | Targets
//  |  5  4  3  2  1  | IDs
//  |  8  3  2  1  0  | The pins of the sensors
//  -------------------
//If ever changing this is in something else these are the constants that define the target array
const uint8_t numberOfTargetsInArray = 5; //The number of targets in the array
const int targetIDs[numberOfTargetsInArray] = {5,4,3,2,1}; //The IDs of the targets
const int targetSensorPins[numberOfTargetsInArray] = {8,3,2,1,0}; //The digital pin numbers of the sensors in the targets
const int targetTypes[numberOfTargetsInArray] = {1,1,1,1}; //Reserved for future use
const bool targetsEnabled[numberOfTargetsInArray] = {false, false, false, true, true}; //The state of the target


class TargetArray {
  public:
    //Constructor function
    TargetArray();

    //Exposed class functions
    void init();

    //Public accessible variables

  private:
    //Private class variables
    Target _targets[_numberOfTargetsInTargetArray];

    //Private class functions
    void _initializeTargets();
};
#endif