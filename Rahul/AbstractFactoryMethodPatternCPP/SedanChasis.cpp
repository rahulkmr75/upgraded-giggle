#ifndef __SEDAN_CHASIS__
#define __SEDAN_CHASIS__

#include <string>
#include "Chasis.cpp"

#include <iostream>

class SedanChasis : Chasis{
    public:
    SedanChasis(std::string colour):
    Chasis(SEDAN_CHASIS , colour)
    {}

    void displayProperty()override{
        std::cout<<"Sedan Chasis with colour"<<this->coulour<<std::endl; 
    }

};
#endif