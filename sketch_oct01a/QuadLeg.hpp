
#ifndef QUADLEG_HPP
#define QUADLEG_HPP

class QuadLeg : public Leg {
    const static short DEFHIPPOS = 0;
    const static short DEFKNEEPOS = 0;
    const static short DEFFOOTPOS = 0;
public:
    QuadLeg();
    QuadLeg(const short attachHip, const short attachKnee, const short attachFoot);
    QuadLeg(const short attachHip, const short attachKnee, const short attachFoot, 
        const short hipPos, const short kneePos, const short legPos);

    void move(const short n);
};

#endif