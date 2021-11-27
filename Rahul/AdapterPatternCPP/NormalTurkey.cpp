#ifndef __NORMAL_TURKEY__
#define __NORMAL_TURKEY__
#include "Turkey.cpp"
#include <iostream>

class NormalTurkey : Turkey{
    public :
    void gobble()override{
        std::cout<<"Gobble\n";
    }
    void fly()override{
        std::cout<<"Turkey Fly\n";
    }
};
#endif