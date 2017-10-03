
/*
    QuadLeg.cpp
    implementation of the QuadLeg class in QuadLeg.hpp
*/

#include "QuadLeg.hpp"

/*
    constructor
    default
*/
QuadLeg::QuadLeg() {}

/*
    constructor
    attaches the leg servos and positions them to the quadleg default design
*/
QuadLeg::QuadLeg(const short attachHip, const short attachKnee, const short attachFoot) 
    : Leg(attachHip, attachKnee, attachFoot) {
        _hip.position(DEFHIPPOS);
        _knee.position(DEFKNEEPOS);
        _foot.position(DEFFOOTPOS);
    }

/*
    constructor
    attaches the leg servos and positions them relative to the variables specified
*/
QuadLeg::QuadLeg(const short attachHip, const short attachKnee, const short attachFoot, 
    const short hipPos, const short kneePos, const short footPos) 
    : Leg(attachHip, attachKnee, attachFoot) {
        _hip.position(hipPos);
        _knee.position(kneePos);
        _foot.position(footPos);
    }

/*
    move
    [yet to be defined]
*/
void QuadLeg::move(const short n) {
  _hip.move(n);
  _knee.move(n);
  _foot.move(n);
}
