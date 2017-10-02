
#include "Leg.hpp"

Leg::Leg(){}

Leg::Leg(const short attachHip, const short attachKnee, const short attachFoot) {
  _hip.attach(attachHip);
  _knee.attach(attachKnee);
  _foot.attach(attachFoot);
}

void Leg::attachHip(const short hip) {
  _hip.attach(hip);
}

void Leg::attachKnee(const short knee) {
  _knee.attach(knee);
}

void Leg::attachFoot(const short foot) {
  _foot.attach(foot);
}
