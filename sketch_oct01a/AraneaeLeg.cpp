
/*
    AraneaeLeg.cpp
    implementation of the AraneaeLeg class in AraneaeLeg.hpp
*/

#include "AraneaeLeg.hpp"

/*
    constructor
    default
*/
AraneaeLeg::AraneaeLeg() {}

/*
    constructor
    attaches the leg servos and positions them to the Araneaeleg default design
*/
AraneaeLeg::AraneaeLeg(const short attachHip, const short attachKnee, const short attachFoot) 
    : Leg(attachHip, attachKnee, attachFoot) {
        _hip.position(DEFHIPPOS);
        _knee.position(DEFKNEEPOS);
        _foot.position(DEFFOOTPOS);
    }

/*
    constructor
    attaches the leg servos and positions them relative to the variables specified
*/
AraneaeLeg::AraneaeLeg(const short attachHip, const short attachKnee, const short attachFoot, 
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
void AraneaeLeg::move(const short n) {
  _hip.move(n);
  _knee.move(n);
  _foot.move(n);
}
