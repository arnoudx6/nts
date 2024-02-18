//Include guards
#ifndef SENSORINTERRUPTFUNCTIONS_H
#define SENSORINTERRUPTFUNCTIONS_H

//Built-in Imports
#include <Arduino.h>

//Common imports

//Custom imports


//The interupt function for the target 1 sensor
static void _sensorInterruptTarget1() {
  Serial.println("interupt hit t1");
}

//The interupt function for the target 2 sensor
static void _sensorInterruptTarget2() {
  Serial.println("interupt hit t2");
}

//The interupt function for the target 3 sensor
static void _sensorInterruptTarget3() {
  Serial.println("interupt hit t3");
}

//The interupt function for the target 4 sensor
static void _sensorInterruptTarget4() {
  Serial.println("interupt hit t4");
}

//The interupt function for the target 5 sensor
static void _sensorInterruptTarget5() {
  Serial.println("interupt hit t5");
}
#endif