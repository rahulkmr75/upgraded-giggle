#ifndef __TUBELESS_WHEELS__
#define __TUBELESS_WHEELS__

#include "Wheels.cpp"
#include <iostream>

class TubelessWheels : Wheels{
    public:

    TubelessWheels():Wheels(TUBELESS_WHEEL , 200)
    {}

    void displayProperty()override{
        std::cout<<"Tubeless Wheels with max speed "<<this->maxSpeed<<std::endl;
    }
};
#endif