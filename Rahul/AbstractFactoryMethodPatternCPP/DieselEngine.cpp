#ifndef __DIESEL_ENGINE__
#define __DIESEL_ENGINE__

#include "Engine.cpp"

#include <string>
#include <iostream>

class DieselEngine : Engine{
    public:
    DieselEngine():
    Engine(DIESEL_ENGINE)
    {
    }

    void displayProperty()override{
        std::cout<<"Diesel Engine"<<std::endl;
    }

};
#endif
