
#include "QuadLegController.hpp"

QuadLegController::QuadLegController() {

}

QuadLegController::~QuadLegController() {
    if(legs != nullptr) delete[] legs;
}