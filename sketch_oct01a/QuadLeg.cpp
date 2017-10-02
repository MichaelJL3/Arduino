
/*
    QuadLeg.cpp
    implementation of the QuadLeg class in QuadLeg.hpp
*/

#include "QuadLeg.hpp"

/*
    constructor
    attaches the leg servos and positions them to the quadleg default design
*/
QuadLeg::QuadLeg(const short attachHip, const short attachKnee, const short attachFoot) 
    : Leg(attachHip, attachKnee, attachFoot) {
        hip.position(DEFHIPPOS);
        knee.position(DEFKNEEPOS);
        foot.position(DEFFOOTPOS);
    }

/*
    constructor
    attaches the leg servos and positions them relative to the variables specified
*/
QuadLeg::QuadLeg(const short attachHip, const short attachKnee, const short attachFoot, 
    const short hipPos, const short kneePos, const short legPos) 
    : Leg(attachHip, attachKnee, attachFoot) {
        hip.position(hipPos);
        knee.position(kneePos);
        foot.position(footPos);
    }

/*
    move
    [yet to be defined]
*/
void QuadLeg::move(const short n) {

}