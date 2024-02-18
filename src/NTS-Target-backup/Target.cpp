#include "Target.h"  //Include class header file

Target::Target() {
  //Using my own init function for this
}


/************************Exposed class functions************************/

void Target::init(int id, int type, bool enabled, int sensorID, int sensorPin, int ledRingID, int ledRingLedCount) {
  //Set class variables
  _id = id;
  _type = type;
  _enabled = enabled;

  //Initialize the sensor
  _sensor = Sensor();
  _sensor.init(sensorID, sensorPin);

  //Initialize the led ring
  _ledRing = LedRing();
  _ledRing.init(ledRingID, ledRingLedCount);
}

uint8_t Target::getID() {
  return _id;
}

uint8_t Target::getType() {
  return _type;
}

bool Target::Enabled() {
  return _enabled;
}


/************************Private class functions************************/
