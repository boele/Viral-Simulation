#pragma once 

#include "movement_strategy.h"

namespace corsim
{
    class RegularMovementStrategy : public MovementStrategy 
    {
        public:
            RegularMovementStrategy(){}
            int get_movement();
    };
};