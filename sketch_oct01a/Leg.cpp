/*
  Leg.cpp
  implementation of the Leg class in Leg.cpp
*/

#include "Leg.hpp"

//default constructor
Leg::Leg() {}

/*
  constructor
  attaches all the servos to the respective passed in IO ports
*/
Leg::Leg(const short attachHip, const short attachKnee, const short attachFoot) {
  _hip.attach(attachHip);
  _knee.attach(attachKnee);
  _foot.attach(attachFoot);
}

/*
  attachHip
  attaches the hip servo to the IO port specified
*/
void Leg::attachHip(const short hip) {
  _hip.attach(hip);
}

/*
  attachKnee
  attaches the knee servo to the IO port specified
*/
void Leg::attachKnee(const short knee) {
  _knee.attach(knee);
}

/*
  attachFoot
  attaches the foot servo to the IO port specified
*/
void Leg::attachFoot(const short foot) {
  _foot.attach(foot);
}
