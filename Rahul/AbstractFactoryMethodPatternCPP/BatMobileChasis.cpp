#ifndef __BATMOBILE_CHASIS__
#define __BATMOBILE_CHASIS__

#include <string>
#include "Chasis.cpp"
#include <iostream>

class BatMobileChasis : Chasis{
    public:
    BatMobileChasis(std::string colour):
    Chasis(BATMOBILE_CHASIS , colour)
    {}

    void displayProperty()override{
        std::cout<<"Batmobile Chasis with colour"<<this->coulour<<std::endl; 
    }

};
#endif