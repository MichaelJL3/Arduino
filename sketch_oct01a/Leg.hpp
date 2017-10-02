
#ifndef LEG_HPP
#define LEG_HPP

#include "ControlledServo.hpp"

class Leg {
  ControlledServo hip;
  ControlledServo knee;
  ControlledServo foot;
public:
  Leg(const short attachHip, const short attachKnee, const short attachFoot);
  virtual void move(const short n) = 0;
};

#endif
