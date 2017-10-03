
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
public:
    AraneaeLeg();
    AraneaeLeg(const short attachHip, const short attachKnee, const short attachFoot);
    AraneaeLeg(const short attachHip, const short attachKnee, const short attachFoot, 
        const short hipPos, const short kneePos, const short footPos);

    //not complete
    void move(const short n);
};

#endif
