
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
    [yet to be implemented]
*/
void AraneaeLeg::position(const short x, const short y, const short z) {

}

/*
    forward
    walks forward
*/
void forward() {
    const short m1 = (_reversed ? -25 : 25);
    const short m2 = (_reversed ? -5 : 5);

    //extend the leg
    _foot.move(m1);
    _hip.move(ControlledServo::MAXPOS);
    _knee.move(negative(m1));

    //pull weight forward
    _foot.move(negative(ControlledServo::MAXPOS));
    _knee.move(m1);

    //reposition leg to default position
    _foot.move(m2);
    _hip.move(negative(ControlledServo::MAXPOS));
    _foot.move(negative(m2));
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

