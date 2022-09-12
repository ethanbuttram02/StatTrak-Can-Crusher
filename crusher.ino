#include <Wire.h>
const int SDAPin = A4;
const int SCLPin = A5;
const int MagnetSensorPin = 4;
const int ForceSensorPin = A6; 



void setup() {
  // put your setup code here, to run once:
  //Pinmode inits
  pinMode(SDAPin, OUTPUT);
  pinMode(SCLPin, OUTPUT);
  pinMode(MagnetSensorPin, INPUT);
  pinMode(ForceSensorPin, INPUT);

  //I will want to initialize the display to zero - ESB 9/12/22

}

void loop() {
  static int cans;
  // put your main code here, to run repeatedly:
  if (checkCrushed()) {
    cans++;
  }
}

bool checkCrushed() {
  //Check if the can is crushed, will need to write logic later. - ESB 9/12/22
  if () {
    //This will be the skeleton of the logic needed - ESB 9/12/22
    return true
  }
  return false

}