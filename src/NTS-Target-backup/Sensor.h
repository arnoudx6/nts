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

  //Exposed custom initialization function
  void init(uint8_t id, uint8_t pin);  //Initializes the class instance

  //Exposed class functions
  uint8_t getID();
  bool getInteruptEnabled();  //Returns state of the sensor interrupt
  uint8_t getDigitalPin();    //Returns the digital pin the sensor is connected to
  uint8_t getInterruptPin();  //Returns the interrupt pin number that belongs to the digital pin
private:
  //Private class variables
  uint8_t _id;            //The ID of the sensor
  uint8_t _digitalPin;    //Refers to the pinout of the board
  uint8_t _interruptPin;  //The interrupt pin number sometimes differs from the digital pin number

  //Private class functions
  void _attachInterrupt();   //Attach the sensor interrupt
  void _detachInterrupt();   //Detach the sensor interrupt
  bool _interruptEnabled();  //The state of the sensor interrupt
};
#endif