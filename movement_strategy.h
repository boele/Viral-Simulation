#pragma once

namespace corsim
{

class MovementStrategy 
{
    public: 
        virtual ~MovementStrategy(){};
        virtual double get_movement_value() = 0;
};

};