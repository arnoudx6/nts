//https://www.circuitbasics.com/programming-with-classes-and-objects-on-the-arduino/
//https://forum.arduino.cc/t/solved-how-to-declare-multi-inheritance-class-file-header/669367/5
//The main code for the target.

#include "TargetArray.h"
TargetArray targetArray;

void setup()
{
  
  Serial.begin(9600); 
  targetArray.init();

}

void loop()
{
  Serial.println("LOOP");
  delay(1000);
} 
