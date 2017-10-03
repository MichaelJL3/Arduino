
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

/*
  forward
  walks forward
*/
void forward() {
  
}

/*
  backward
  walks backward
*/
void backward() {
  
}

/*
  down
  lowers body
*/
void down() {
  
}

/*
  up
  raises body
*/
void up() {
  
}

/*
  left
  straddles left
*/
void left() {
  
}

/*
  right
  straddles right
*/
void right() {
  
}

/*
  climb
  attempt to gain higher altitude
*/
void climb() {
  
}

/*
  turn
  turns direction based on specified degrees
*/
void turn(const short degrees) {
  
}

/*
  diagonalForward
  walk diagonally forwards based on the specified degrees
*/
void diagonalForward(const short degrees) {
  
}

/*
  diagonalBackward
  walk diagonally backwards based on the specified degrees
*/
void diagonalBackward(const short degrees) {
  
}

