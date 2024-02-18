#include "Target.h" //Include class header file

Target::Target() {
  //Using my own init function for this
}


/************************Exposed class functions************************/

void Target::init(uint8_t targetID, uint8_t targetSensorPin, uint8_t targetType, bool targetEnabled) {
  //Set class variables
  _id = targetID;
  _sensorPin = targetSensorPin;
  _type = targetType;
  _enabled = targetEnabled;

  //Initialize the sensor
  _sensor = Sensor();
  _sensor.init(_sensorPin);
}

uint8_t Target::getID(){
  return _id;
}

uint8_t Target::getSensorPin(){
  return _sensorPin;
}

uint8_t Target::getType() {
  return _type;
}

bool Target::Enabled() {
  return _enabled;
}


/************************Private class functions************************/
