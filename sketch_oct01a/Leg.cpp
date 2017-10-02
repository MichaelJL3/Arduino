
#include "Leg.hpp"

Leg::Leg(const short attachHip, const short attachKnee, const short attachFoot) {
  hip.attach(attachHip);
  knee.attach(attachKnee);
  foot.attach(attachFoot);
}

void move(const short n) {

}

