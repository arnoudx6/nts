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

    //Exposed class functions
    void init(uint8_t numberOfLeds);
  private:
    //Private class variables
    uint8_t _numberOfLeds;

    //Private class functions
};
#endif