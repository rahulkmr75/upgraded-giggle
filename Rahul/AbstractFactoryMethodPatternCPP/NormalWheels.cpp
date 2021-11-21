#ifndef __NORMAL_WHEELS__
#define __NORMAL_WHEELS__

#include "Wheels.cpp"
#include <iostream>

class NormalWheels : Wheels{
    public:

    NormalWheels():Wheels(NORMAL_WHEEL , 150)
    {}

    void displayProperty()override{
        std::cout<<"Normal Wheels with max speed "<<this->maxSpeed<<std::endl;
    }
};
#endif