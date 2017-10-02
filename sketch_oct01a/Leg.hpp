
/*
  Leg.hpp
  defines a model of a 3 servo leg
  must be extended in order to work
*/

#ifndef LEG_HPP
#define LEG_HPP

//the leg requries servos in order to function
#include "ControlledServo.hpp"

/*
  Leg
  a template for a 3 servo leg, must be extended as move should be defined
  based on the type of leg
*/
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

  //must be overwritten (Abstract function)
  virtual void move(const short n) = 0;
};

#endif
