
#include "ControlledServo.hpp"

const short DELAY = 25;

const short FORWARD = 10;
const short BACKWARD = -10;

const short UP = 2;
const short DN = 3;

const short S1 = 7;
const short S2 = 6;

ControlledServo s1 = 0, s2 = 180;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(UP, INPUT);
  pinMode(DN, INPUT);
  
  s1.attach(S1);
  s2.attach(S2);
}

void loop() {
  // put your main code here, to run repeatedly: 
  int increaseBtn = digitalRead(UP);
  int decreaseBtn = digitalRead(DN);
  int pos;
  
  if(increaseBtn == HIGH) {
    pos = FORWARD;
  } else if(decreaseBtn == HIGH) {
    pos = BACKWARD;
  }
  
  s1.move(pos);
  s2.move(0-pos);

  delay(DELAY);
}
