//Include guards
#ifndef LEDRING_H
#define LEDRING_H

//Built-in Imports
#include <Arduino.h>

//Common imports
//#include "FastLED.h"

//Custom imports


class LedRing {
public:
  //Constructor variable
  LedRing();

  //Exposed custom initialization function
  void init(uint8_t id, uint8_t ledCount);  //Initializes the class instance

  //Exposed class functions

private:
  //Private class variables
  uint8_t _id;        //The ID of the led ring
  uint8_t _ledCount;  //The amount of LEDs in the led ring

  //Private class functions
};
#endif