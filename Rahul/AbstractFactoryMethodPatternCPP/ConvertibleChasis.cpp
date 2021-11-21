#ifndef __CONVERTIBLE_CHASIS__
#define __COVERTIBLE_CHASIS__

#include <string>
#include "Chasis.cpp"
#include <iostream>

class ConvertibleChasis : Chasis{
    public:
    ConvertibleChasis(std::string colour):
    Chasis(CONVERTIBLE_CHASIS , colour)
    {}

    void displayProperty()override{
        std::cout<<"Convertible Chasis with colour"<<this->coulour<<std::endl; 
    }



};
#endif