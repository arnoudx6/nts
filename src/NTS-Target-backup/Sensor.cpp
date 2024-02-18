#include "Sensor.h";                    //Include class header file
#include "SensorInterruptFunctions.h";  //Put them in a seperate file, because I dont want to see them :)

Sensor::Sensor() {
  //Using my own init function for this
}


/************************Exposed class functions************************/

void Sensor::init(uint8_t id, uint8_t pin) {
  //Set class variables
  _id = id;
  _digitalPin = pin;
  _interruptPin = digitalPinToInterrupt(_digitalPin);
}

uint8_t Sensor::getDigitalPin() {
  return _digitalPin;
}

uint8_t Sensor::getInterruptPin() {
  return _digitalPin;
}

/************************Private class functions************************/

void Sensor::_attachInterrupt() {
  attachInterrupt(_interruptPin, _sensorInterruptTarget1, RISING);
}


void Sensor::_detachInterrupt() {
  detachInterrupt(_interruptPin);
}

bool Sensor::_interruptEnabled() {
  //************************************************** To be written
  return true;
}