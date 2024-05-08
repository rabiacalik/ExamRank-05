#pragma once
#include "ATarget.hpp"

class BricWall : public ATarget
{
    public:
        BricWall();
        ~BricWall();
        ATarget* clone() const;
};
