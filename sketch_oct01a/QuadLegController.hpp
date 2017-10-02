
#ifndef QuadLegController_HPP
#define QuadLegController_HPP

#include <vector>

class QuadLegController {
    std::vector<QuadLeg> legs;
public:
    static const short FRONTLEFT = 0;
    static const short FRONTRIGHT = 1;
    static const short BACKLEFT = 2;
    static const short BACKRIGHT = 3;
    static const short HIP = 0;
    static const short KNEE = 1;
    static const short FOOT = 2;

    QuadLegController();
};

const short operator _FL (const short n) const {
    return n;
}

const short operator _FR (const short n) const {
    return 0-n;
}

const short operator _BL (const short n) const {
    return 180-n;
}

const short operator _BR (const short n) const {
    return n;
}

#endif