#pragma once 

#include "movement_strategy.h"

namespace corsim
{

/**
* Assigment A + B.1
* Regular movement strategy for default movement speed of subject
*/
class RegularMovementStrategy : public MovementStrategy 
{
    public:
        double get_movement_value() { return 1; }
};

};