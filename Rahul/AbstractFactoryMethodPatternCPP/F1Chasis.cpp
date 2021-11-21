#ifndef __F1_CHASIS__
#define __F1_CHASIS__

#include <string>
#include "Chasis.cpp"
#include <iostream>

class F1Chasis : Chasis{
    public:
    F1Chasis(std::string colour):
    Chasis(F1_CHASIS , colour)
    {}

    void displayProperty()override{
        std::cout<<"F1 Chasis with colour"<<this->coulour<<std::endl; 
    }

};
#endif