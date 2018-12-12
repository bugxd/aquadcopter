#include "Arduino.h"
#include "Rotor.h"

Rotor::Rotor(int pin) {
  _rotor.attach(pin);   // set pin number
}

void Rotor::setSpeed(int speed){
  int angle = map(speed, 0, 100, 0, 180); //Sets servo positions to different speeds 
  _rotor.write(angle);
}
