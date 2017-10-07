
/*
    AraneaeLeg.cpp
    implementation of the AraneaeLeg class in AraneaeLeg.hpp
*/

#include "AraneaeLeg.hpp"

/*
    constructor
    default
*/
AraneaeLeg::AraneaeLeg(): _reversed(false) {}

/*
    constructor
    attaches the leg servos and positions them to the Araneaeleg default design
*/
AraneaeLeg::AraneaeLeg(const short attachHip, const short attachKnee, const short attachFoot, const bool reversed = false) 
    : Leg(attachHip, attachKnee, attachFoot), _reversed(reversed) {
        _hip.position(DEFHIPPOS);
        _knee.position(DEFKNEEPOS);
        _foot.position(DEFFOOTPOS);

        _m1 = (_reversed ? -25 : 25);
        _m2 = (_reversed ? -5 : 5);
    }

/*
    constructor
    attaches the leg servos and positions them relative to the variables specified
*/
AraneaeLeg::AraneaeLeg(const short attachHip, const short attachKnee, const short attachFoot, 
    const short hipPos, const short kneePos, const short footPos, const bool reversed = false) 
    : Leg(attachHip, attachKnee, attachFoot), _reversed(reversed) {
        _hip.position(hipPos);
        _knee.position(kneePos);
        _foot.position(footPos);
    }

/*
    move
    moves the leg based on the increments given
    [yet to be implemented]
*/
void AraneaeLeg::move(const short x, const short y, const short z) {

}

/*
    position
    positions the leg based on the given coordinates for each piece
    moves each piece in an incremental way to avoid mass movements of single pieces
*/
void AraneaeLeg::position(const short x, const short y, const short z) {
    const short diffFoot = abs(x - _foot.getPosition());
    const short diffHip = abs(y - _hip.getPosition());
    const short diffKnee = abs(z - _knee.getPosition());

    const short maxDiff = max(max(diffFoot, diffHip), diffKnee);

    const short end = ceil(maxDiff / (float)INCREMENTS);

    for(short i = 0; i < end; ++i) {
        _foot.move(INCREMENTS);
        _hip.move(INCREMENTS);
        _knee.move(INCREMENTS);
    }
}

/*
    extendLeg
    extends the leg out
*/
void AraneaeLeg::extendLeg() {
    _foot.move(_m1);
    _hip.move(ControlledServo::MAXPOS);
    _knee.move(negative(_m1));
}

/*
    pullForward
    pulls weight forward to advance position
*/
void AraneaeLeg::pullForward() {
    _foot.move(negative(ControlledServo::MAXPOS));
    _knee.move(_m1);
}

/*
    resetLeg
    resets the leg back to its default position
    [change _m2 to something more default]
*/
void AraneaeLeg::resetLeg() {
    _foot.move(_m2);
    _hip.position(negative(DEFHIPPOS));
    _foot.position(negative(DEFFOOTPOS));
}

/*
    backward
    walks backward
*/
void backward() {

}

/*
    down
    lowers body
*/
void down() {

}

/*
    up
    raises body
*/
void up() {

}

/*
    left
    straddles left
*/
void left() {

}

/*
    right
    straddles right
*/
void right() {

}

/*
    climb
    attempt to gain higher altitude
*/
void climb() {

}

/*
    turn
    turns direction based on specified degrees
*/
void turn(const short degrees) {

}

/*
    diagonalForward
    walk diagonally forwards based on the specified degrees
*/
void diagonalForward(const short degrees) {

}

/*
    diagonalBackward
    walk diagonally backwards based on the specified degrees
*/
void diagonalBackward(const short degrees) {

}

