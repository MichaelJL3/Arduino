
#ifndef QuadLegController_HPP
#define QuadLegController_HPP

class QuadLegController {
    static const short FRONTLEFT = 0;
    static const short FRONTRIGHT = 1;
    static const short BACKLEFT = 2;
    static const short BACKRIGHT = 3;

    QuadLeg* legs;
public:
    QuadLegController();
    ~QuadLegController();
};

#endif