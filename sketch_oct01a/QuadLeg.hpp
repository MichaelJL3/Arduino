
/*
    QuadLeg.hpp
    implements the legs functionality for a quad leg type
*/

#ifndef QUADLEG_HPP
#define QUADLEG_HPP

#include "Leg.hpp"

/*
    QuadLeg
    extends Leg
    defines the default positions of the leg based on a quad leg structure
    defines how the leg should move
*/
class QuadLeg : public Leg {
    //default positions for the leg (not complete)
    const static short DEFHIPPOS = 0;
    const static short DEFKNEEPOS = 0;
    const static short DEFFOOTPOS = 0;
public:
    QuadLeg();
    QuadLeg(const short attachHip, const short attachKnee, const short attachFoot);
    QuadLeg(const short attachHip, const short attachKnee, const short attachFoot, 
        const short hipPos, const short kneePos, const short footPos);

    //not complete
    void move(const short n);
};

#endif
