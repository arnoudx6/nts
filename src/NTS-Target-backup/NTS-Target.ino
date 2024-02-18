//Built-in Imports
#include <Arduino.h>

//Common imports

//Custom imports
#include "TargetArray.h"




//Define how many target arrays there are
TargetArray targetArray;

void setup() {
  Serial.begin(9600);
  targetArray.init(1, 1, true);
}

void loop() {
  //If the target array or targets in the array is not enabled we don't have to do anything.
  if(targetArray.getEnabled() != true || targetArray.getAnyTargetsEnabled() != true){
    return;
  }


  Serial.println("LOOP");
  delay(1000);
}
