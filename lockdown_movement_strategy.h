#pragma once 

#include "movement_strategy.h"

namespace corsim
{

class LockdownMovementStrategy : public MovementStrategy 
{
    public:
        double get_movement_value() { return 0; }
};

};