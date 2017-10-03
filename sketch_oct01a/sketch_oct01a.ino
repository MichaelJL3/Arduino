
#include "ControlledServo.hpp"
#include "QuadLeg.hpp"

const short DELAY = 25;

const short FORWARD = 10;
const short BACKWARD = -10;

const short UP = 2;
const short DN = 3;

const short S1 = 7;
const short S2 = 6;
const short S3 = 5;

AraneaeLeg leg1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(UP, INPUT);
  pinMode(DN, INPUT);

  leg1 = AraneaeLeg(S1, S2, S3, 20, 45, 180);
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
  
  //determine how leg will move?? direction??
  leg1.move(pos);

  delay(DELAY);
}
