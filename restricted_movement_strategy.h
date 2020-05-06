#pragma once 

#include "movement_strategy.h"

namespace corsim
{

class RestrictedMovementStrategy : public MovementStrategy 
{
    public:
        double get_movement_value() { return 0.1; }
};

};