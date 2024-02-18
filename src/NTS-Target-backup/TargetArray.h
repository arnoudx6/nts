//Include guards
#ifndef TARGETARRAY_H
#define TARGETARRAY_H

//Built-in Imports
#include <Arduino.h>

//Common imports

//Custom imports
#include "TargetArrayDefinition.h"  //Import the array definition from a seperate file. This keeps this class file clean.
#include "Target.h"                 //Contains the target definition

class TargetArray {
public:
  //Constructor function
  TargetArray();

  //Exposed custom initialization function
  void init(uint8_t id, uint8_t type, bool enabled);

  //Exposed class functions
  uint8_t getID();    //Returns id of the target array
  uint8_t getType();  //Returns the type of the target array
  bool getEnabled();  //Returns the enabled state of the target array

  void setType(uint8_t);          //Sets the type of the target array
  void setEnabled(bool enabled);  //Sets the enabled state of the target array

  //Public accessible variables

private:
  //Private class variables
  uint8_t _id;    //The id of the target array
  uint8_t _type;  //The type of the target array
  bool _enabled;  //The enabled state of the target array

  Target _targets[targetCount];  //An array containing all targets of the target array

  //Private class functions
};
#endif