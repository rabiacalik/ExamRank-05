#include "BrickWall.hpp"

BricWall::BricWall() : ATarget("Inconspicuous Red-brick Wall") {}

BricWall::~BricWall() {}

ATarget* BricWall::clone() const {
    return (new BricWall());
}