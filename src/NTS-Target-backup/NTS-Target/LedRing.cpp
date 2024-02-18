#include "ledring.h"; //Include class header file

LedRing::LedRing() {
  //Using my own init function for this
}


/************************Exposed class functions************************/

void LedRing::init(uint8_t numberOfLeds) {
  //Set class variables
  _numberOfLeds = numberOfLeds;
}

/************************Private class functions************************/
