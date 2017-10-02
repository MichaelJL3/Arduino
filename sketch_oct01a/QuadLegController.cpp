
#include "QuadLegController.hpp"

QuadLegController::QuadLegController(const short fl[3], const short fr[3], const short bl[3], const short br[3]) {
    leg.resize(4);
    
    leg[FRONTLEFT] = QuadLeg(fl[HIP], fl[KNEE], fl[FOOT], 0_L, 0_L, 0_L);
    leg[FRONTRIGHT] = QuadLeg(fr[HIP], fr[KNEE], fr[FOOT], 0_R, 0_R, 0_R);
    leg[BACKLEFT] = QuadLeg(bl[HIP], bl[KNEE], bl[FOOT], 0_L, 0_L, 0_L);
    leg[BACKRIGHT] = QuadLeg(br[HIP], br[KNEE], br[FOOT], 0_R, 0_R, 0_R);
}
