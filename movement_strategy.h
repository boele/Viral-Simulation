#pragma once

namespace corsim
{

class MovementStrategy {
    public: 
        virtual int get_movement() = 0;
};

}