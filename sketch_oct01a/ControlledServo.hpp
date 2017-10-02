
#ifndef CONTROLLEDSERVO_HPP
#define CONTROLLEDSERVO_HPP

#include <Servo.h>

class ControlledServo : public Servo {
  short pos;
  const static short MAXPOS = 180;
  const static short MINPOS = 0;
public:
  ControlledServo();
  ControlledServo(const short p);
  void move(const short n);
  void position(const short n);
};

#endif
