#ifndef __RACING_WHEELS__
#define __RACING_WHEELS__

#include "Wheels.cpp"
#include <iostream>

class RacingWheels : Wheels{
    public:

    RacingWheels():Wheels(RACING_WHEEL , 300)
    {}

    void displayProperty()override{
        std::cout<<"Racing Wheels with max speed "<<this->maxSpeed<<std::endl;
    }
};
#endif