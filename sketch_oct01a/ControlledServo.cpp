
/*
  ControlledServo.cpp
  implementation of the ControlledServo class in ControlledServo.hpp
*/

#include "ControlledServo.hpp"

/*
  constructor
  instantiates the servo
  sets the default position to the lowest allowed
*/
ControlledServo::ControlledServo() {
  Servo();
  pos = MINPOS;
  position(pos);
}

/*
  constructor
  instantiates the servo
  sets the default position to the number specified
*/
ControlledServo::ControlledServo(const short p) {
  Servo();
  pos = p;
  position(pos);
}

/*
  move
  increases the servos position by the specified amount
*/
void ControlledServo::move(const short n) {
  position(pos + n);
}

/*
  position
  moves and stores the new position for the servo
*/
void ControlledServo::position(const short n) {
  pos = n;
  pos = (pos < MINPOS ? MINPOS : pos);
  pos = (pos > MAXPOS ? MAXPOS : pos);
  write(pos);
}
