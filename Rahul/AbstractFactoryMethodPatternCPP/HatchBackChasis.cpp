#ifndef __HATCHBACK_CHASIS__
#define __HATCHBACK_CHASIS__

#include <string>
#include "Chasis.cpp"
#include <iostream>

class HatchBackChasis : Chasis{
    public:
    HatchBackChasis(std::string colour):
    Chasis(HATCHBACK_CHASIS , colour)
    {}

    void displayProperty()override{
        std::cout<<"HatchBack Chasis with colour"<<this->coulour<<std::endl; 
    }

};
#endif