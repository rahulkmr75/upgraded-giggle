#ifndef __ELECTRIC_ENGINE__
#define __ELECTRIC_ENGINE__

#include "Engine.cpp"

#include <string>
#include <iostream>

class ElectricEngine : Engine{
    public:
    ElectricEngine():
    Engine(ELECTRIC_ENGINE)
    {
    }
    void displayProperty()override{
        std::cout<<"Electric Engine"<<std::endl;
    }

};
#endif
