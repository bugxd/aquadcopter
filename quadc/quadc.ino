#include "Rotor.h"

Rotor front_left(11);
Rotor front_right(10);
Rotor back_left(9);
Rotor back_right(6);

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  Serial.println("initialize");
  front_left.setSpeed(0);
  front_right.setSpeed(0);
  back_left.setSpeed(0);
  back_right.setSpeed(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("test front left");
  test(front_left);
  Serial.println("test front right");
  test(front_right);
  Serial.println("test back left");
  test(back_left);
  Serial.println("test back right");
  test(back_right);
  
}

void test(Rotor r) {

  int speed; //Implements speed variable
  int max = 50; // max % speed for rotors never go over 85 !
  
  Serial.println("  start increasing speed");
  
  for(speed = 0; speed <= max; speed += 5) { //Cycles speed up to 70% power for 1 second
  
    r.setSpeed(speed); //Creates variable for speed to be used in in for loop
  
    delay(1000);

  }

  Serial.println("  finish increasing speed");
  delay(4000); //Stays on for 4 seconds
  Serial.println("  start decreasing speed");
  
  for(speed = max; speed > 0; speed -= 5) { // Cycles speed down to 0% power for 1 second
  
    r.setSpeed(speed); 
    delay(1000);

  }

  Serial.println("  finish decreasing speed");
  r.setSpeed(0); //Sets speed variable to zero no matter what

  delay(1000); //Turns off for 1 second

}
