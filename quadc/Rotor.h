/*
  Rotor.h - Library to controll a brushles motor
*/

#ifndef Rotor_h
#define Rotor_h

#include "Servo.h"

class Rotor {
  public:
    Rotor(int pin);
    void setSpeed(int speed);
  private:
    Servo _rotor;
};

#endif
