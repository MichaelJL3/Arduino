
/*
  QuadLegController.cpp
  implementation of the QuadLegController class in QuadLegController.hpp
*/

#include "QuadLegController.hpp"

/*
  constructor
  creates a set of 4 legs with given positions
*/
QuadLegController::QuadLegController(const short fl[3], const short fr[3], const short bl[3], const short br[3]) {
    legs = new AraneaeLeg[4] { 
      { fl[HIP], fl[KNEE], fl[FOOT], 0_FL, 0_FL, 0_FL },
      { fr[HIP], fr[KNEE], fr[FOOT], 0_FR, 0_FR, 0_FR },
      { bl[HIP], bl[KNEE], bl[FOOT], 0_BL, 0_BL, 0_BL },
      { br[HIP], br[KNEE], br[FOOT], 0_BR, 0_BR, 0_BR }
    };
}

/*
  destructor
  deletes memory allocated for the legs
*/
QuadLegController::~QuadLegController() {
  if(legs != nullptr) delete[] legs; 
}
