#include "Sensor.h"; //Include class header file
#include "SensorInterruptFunctions.h"; //Put them in a seperate file, because I dont want to see them :)

Sensor::Sensor() {
  //Using my own init function for this
}


/************************Exposed class functions************************/

void Sensor::init(uint8_t sensorPin) {
  //Set class variables
  _digitalPin = sensorPin;
  _interruptPin = digitalPinToInterrupt(_digitalPin);
}


/************************Private class functions************************/

void Sensor::_attachInterrupt() { 
  attachInterrupt(_interruptPin, _sensorInterruptTarget1, RISING);
}


void Sensor::_detachInterrupt() {
  detachInterrupt(_interruptPin);
}