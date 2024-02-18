//Include guards
#ifndef TARGET_H
#define TARGET_H

//Built-in Imports
#include <Arduino.h>

//Common imports

//Custom imports
#include "Sensor.h"
#include "ledring.h"

class Target {
  public:
    //Constructor function
    Target();
    //Exposed class functions
    void init(uint8_t targetID, uint8_t targetSensorPin, uint8_t targetType, bool targetEnabled);

    bool getSensorState();
    void setSensorState(bool state); //This activates/deactivates the Interrupt from the sensor

    //Public accessible variables
    uint8_t getID();
    uint8_t getSensorPin();
    uint8_t getType();
    bool Enabled();

  private:
    //Private class variables
    uint8_t _id;
    uint8_t _sensorPin;
    uint8_t _type;
    uint8_t _enabled;

    Sensor _sensor;
    //LedRing _ledRing;

    //Private class functions

};
#endif