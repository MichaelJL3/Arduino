
#include "QuadLeg.hpp"

QuadLeg::QuadLeg(const short attachHip, const short attachKnee, const short attachFoot) 
    : Leg(attachHip, attachKnee, attachFoot) {
        hip.position(DEFHIPPOS);
        knee.position(DEFKNEEPOS);
        foot.position(DEFFOOTPOS);
    }

QuadLeg::QuadLeg(const short attachHip, const short attachKnee, const short attachFoot, 
    const short hipPos, const short kneePos, const short legPos) 
    : Leg(attachHip, attachKnee, attachFoot) {
        hip.position(hipPos);
        knee.position(kneePos);
        foot.position(footPos);
    }

void QuadLeg::move(const short n) {

}