#include "TargetArray.h" //Include class header file

TargetArray::TargetArray() {
  //Using my own init function for this
}

/************************Exposed class functions************************/

void TargetArray::init() {
  _initializeTargets();
}


/************************Private class functions************************/

void TargetArray::_initializeTargets(){
  //Initialize each target
  for (uint8_t loopIteration; loopIteration < numberOfTargetsInArray; loopIteration++){
    uint8_t targetID = targetIDs[loopIteration];
    uint8_t targetSensorPin = targetSensorPins[loopIteration];
    uint8_t targetType = targetTypes[loopIteration];
    uint8_t targetEnabled = targetsEnabled[loopIteration];

    _targets[loopIteration] = Target();
    _targets[loopIteration].init(targetID, targetSensorPin, targetType, targetEnabled);
  }
}