
#ifndef LEG_HPP
#define LEG_HPP

#include "ControlledServo.hpp"

class Leg {
  ControlledServo hip;
  ControlledServo knee;
  ControlledServo foot;
public:
  Leg(const short attachHip, const short attachKnee, const short attachFoot);
  void move(const short n);
};

#endif
