
/*
    QuadLeg.hpp
    implements the legs functionality for a quad leg type
*/

#ifndef QUADLEG_HPP
#define QUADLEG_HPP

//y define default positions if each leg needs to be appropriately offset?? only works on the 1st leg

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
    QuadLeg(const short attachHip, const short attachKnee, const short attachFoot);
    QuadLeg(const short attachHip, const short attachKnee, const short attachFoot, 
        const short hipPos, const short kneePos, const short legPos);

    //not complete
    void move(const short n);
};

#endif