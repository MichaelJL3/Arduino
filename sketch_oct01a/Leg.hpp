
#ifndef LEG_HPP
#define LEG_HPP

#include "ControlledServo.hpp"

class Leg {
  ControlledServo _hip;
  ControlledServo _knee;
  ControlledServo _foot;
public:
  Leg();
  Leg(const short attachHip, const short attachKnee, const short attachFoot);
  void attachHip(const short hip);
  void attachKnee(const short knee);
  void attachFoot(const short foot);
  virtual void move(const short n) = 0;
};

#endif
