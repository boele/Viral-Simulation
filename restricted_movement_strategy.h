#pragma once 

#include "movement_strategy.h"

namespace corsim
{

/**
* Assigment B.1
* Restricted movement strategy for very slow movement speed of subject
*/
class RestrictedMovementStrategy : public MovementStrategy 
{
    public:
        double get_movement_value() { return 0.1; }
};

};