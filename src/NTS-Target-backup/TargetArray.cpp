#include "TargetArray.h"  //Include class header file

TargetArray::TargetArray() {
  //Using my own init function for this
}

/************************Exposed class functions************************/

void TargetArray::init(uint8_t id, uint8_t type, bool enabled) {
  _id = id;            //Set the target array ID
  _type = type;        //Set the target array type
  _enabled = enabled;  //Set the target state

  //Initialize each target in the target array
  for (uint8_t loopIteration; loopIteration < targetCount; loopIteration++) {
    _targets[loopIteration] = Target();        //Create a new instance of the target class
    _targets[loopIteration].init(              //Initialize the new target instance for the target array
      targetIDs[loopIteration],                //Target ID
      targetTypes[loopIteration],              //Target type
      targetEnabledStates[loopIteration],           //Target enabled
      targetSensorIDs[loopIteration],          //Sensor ID
      targetSensorPins[loopIteration],         //Sensor pin
      targetLedRingIDs[loopIteration],         //Led ring ID
      targetLedRingLedCounts[loopIteration]);  //Led ring number of LEDs.
  }
}

bool TargetArray::getEnabled(){
  return _enabled;
}

uint8_t TargetArray::getID(){
  return _id;
}

uint8_t TargetArray::getType(){
  return _type;
}

void TargetArray::setEnabled(bool enabled){
  _enabled = enabled;
}


/************************Private class functions************************/
