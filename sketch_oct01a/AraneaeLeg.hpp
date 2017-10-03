
/*
    AraneaeLeg.hpp
    implements the legs functionality for a Araneae leg type
*/

#ifndef ARANEAELEG_HPP
#define ARANEAELEG_HPP

#include "Leg.hpp"

/*
    AraneaeLeg
    extends Leg
    defines the default positions of the leg based on a Araneae leg structure
    defines how the leg should move
*/
class AraneaeLeg : public Leg {
    //default positions for the leg (not complete)
    const static short DEFHIPPOS = 0;
    const static short DEFKNEEPOS = 0;
    const static short DEFFOOTPOS = 0;

    bool _reversed;
public:
    AraneaeLeg();
    AraneaeLeg(const short attachHip, const short attachKnee, const short attachFoot, const short offset =0);
    AraneaeLeg(const short attachHip, const short attachKnee, const short attachFoot, 
        const short hipPos, const short kneePos, const short footPos, const short offset = 0);

    //not complete
    void move(const short x, const short y, const short z);
    void position(const short x, const short y, const short z);

    //movements
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
    negative
    negates number entered
*/
inline const short negative(const short n) {
    return 0-n;
}

#endif
