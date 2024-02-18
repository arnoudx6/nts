//Include guards
#ifndef TARGET_H
#define TARGET_H

//Built-in Imports
#include <Arduino.h>

//Common imports

//Custom imports
#include "Sensor.h"
#include "LedRing.h"

class Target {
public:
  //Constructor function
  Target();

  //Exposed custom initialization function
  void init(int id, int type, bool enabled, int sensorID, int sensorPin, int ledRingID, int ledRingLedCount);  //Initializes the class instance

  //Exposed class functions
  bool getSensorState();
  void setSensorState(bool state);  //This activates/deactivates the Interrupt from the sensor

  //Public accessible variables
  uint8_t getID();
  uint8_t getSensorPin();
  uint8_t getType();
  bool Enabled();

private:
  //Private class variables
  uint8_t _id;
  uint8_t _type;
  bool _enabled;
  
  Sensor _sensor;
  LedRing _ledRing;

  //Private class functions
};
#endif