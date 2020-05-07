#pragma once 

#include "movement_strategy.h"

namespace corsim
{

/**
* Assigment A + B.1
* Lockdown movement strategy for no movement speed of subject
*/
class LockdownMovementStrategy : public MovementStrategy 
{
    public:
        double get_movement_value() { return 0; }
};

};