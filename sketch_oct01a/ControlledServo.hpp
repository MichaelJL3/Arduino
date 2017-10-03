
/*
  ControlledServo.hpp
  encapsulates a servo as such it gives the servo
  a stored position and limitations to its writable positions
*/

#ifndef CONTROLLEDSERVO_HPP
#define CONTROLLEDSERVO_HPP

#include <Servo.h>

/*
  ControlledServo
  extends Servo
  keeps track of a servos position 
  allows for mutating the servos location within allowed bounds
*/
class ControlledServo : public Servo {
  short pos;
public:
  //max and min servo location bounds
  const static short MAXPOS = 180;
  const static short MINPOS = 0;

  ControlledServo();
  ControlledServo(const short p);
  void move(const short n);
  void position(const short n);
  void write(const short n, const short incr);
};

#endif
