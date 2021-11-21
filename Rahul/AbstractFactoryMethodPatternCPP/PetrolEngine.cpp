#ifndef __PETROL_ENGINE__
#define __PETROL_ENGINE__

#include "Engine.cpp"

#include <string>
#include <iostream>

class PetrolEngine : Engine{
    public:
    PetrolEngine():
    Engine(PETROL_ENGINE)
    {
    }

    void displayProperty()override{
        std::cout<<"Petrol Engine"<<std::endl;
    }

};
#endif
