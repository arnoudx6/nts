//Include guards
#ifndef TARGETARRAYDEFINITION_H
#define TARGETARRAYDEFINITION_H

// Configure the targets that are in the target array
//
//       Target array layout
//  |---------------------------|
//  |  (+)  (+)  (+)  (+)  (+)  |
//  |---------------------------|
//      5    4    3    2    1     Target IDs
//      1    1    1    1    1     Target types
//      T    T    T    T    T     Target enabled (True or False)
//      5    4    3    2    1     Sensor IDs
//      8    3    2    1    0     Sensor pins
//      5    4    3    2    1     Led ring IDs
//      32   32   32   32   32    The number of leds per led ring


//If ever changing this target array in something else these are the constants that define the target array
const int targetArrayID = 1;               //The identifier of the target array
const uint8_t targetArrayType = 1;         //The type of the target array
const uint8_t targetCount = 5;  //The number of targets in the array

//
const int targetIDs[targetCount] = { 5, 4, 3, 2, 1 };                          //The IDs of the targets
const int targetTypes[targetCount] = { 1, 1, 1, 1 };                           //Reserved for future use. If there are multiple types of targets
const bool targetEnabledStates[targetCount] = { false, false, false, true, true };  //If the target is enabled
const int targetSensorIDs[targetCount] = { 5, 4, 3, 2, 1 };                    //The IDs of the sensors belonging to the targets
const int targetSensorPins[targetCount] = { 8, 3, 2, 1, 0 };                   //The digital pin numbers of the sensors in the targets
const int targetLedRingIDs[targetCount] = { 5, 4, 3, 2, 1 };                   //The IDs of the led rings belonging to the targets
const int targetLedRingLedCounts[targetCount] = { 32, 32, 32, 32, 32 };        //The number of leds each led ring contains
#endif