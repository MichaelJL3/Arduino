
/*
  QuadLegController.hpp
  encapsulates the control systems for all the legs
*/

#ifndef QuadLegController_HPP
#define QuadLegController_HPP

#include "QuadLeg.hpp"

/*
  QuadLegController
  creates and encapsulates the movements and controls of the legs
*/
class QuadLegController {
    QuadLeg *legs;
public:
    //default and constant values
    static const short FRONTLEFT = 0;
    static const short FRONTRIGHT = 1;
    static const short BACKLEFT = 2;
    static const short BACKRIGHT = 3;
    static const short HIP = 0;
    static const short KNEE = 1;
    static const short FOOT = 2;

    QuadLegController(const short fl[3], const short fr[3], const short bl[3], const short br[3]);
    ~QuadLegController();

    void forward();
    void backward();
    void down();
    void up();
    void left();
    void right();
    void climb();
    void turn(const short degrees);
    void diagonalForward(const short degrees);
    void diagonalBackward(const short degrees);
};

/*
  conversion for front left leg
*/
const short operator "" _FL (unsigned long long int n) {
    return n;
}

/*
  conversion for front right leg
*/
const short operator "" _FR (unsigned long long int n) {
    return 0-n;
}

/*
  conversion for back left leg
*/
const short operator "" _BL (unsigned long long int n) {
    return 180-n;
}

/*
  conversion for back right leg
*/
const short operator "" _BR (unsigned long long int n) {
    return n;
}

#endif
