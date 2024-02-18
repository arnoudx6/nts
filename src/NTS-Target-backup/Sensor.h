//Include guards
#ifndef SENSOR_H
#define SENSOR_H

//Built-in Imports
#include <Arduino.h>

//Common imports

//Custom imports


class Sensor {
public:
  //Constructor variable
  Sensor();

  //Exposed class functions
  void init(uint8_t sensorPin);
private:
  //Private class variables
  uint8_t _digitalPin;    //Refers to the pinout of the board
  uint8_t _interruptPin;  //The interrupt pin number sometimes differs from the digital pin number

  //Private class functions
  void _attachInterrupt();  //Attach the sensor interrupt
  void _detachInterrupt();  //Detach the sensor interrupt
};
#endif