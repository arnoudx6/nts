#include "LedRing.h";  //Include class header file

LedRing::LedRing() {
  //Using my own init function for this
}


/************************Exposed class functions************************/

void LedRing::init(uint8_t id, uint8_t ledCount) {
  //Set class variables
  _id = id;
  _ledCount = ledCount;
}

/************************Private class functions************************/
