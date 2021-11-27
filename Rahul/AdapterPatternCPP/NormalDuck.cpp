#ifndef __NORMAL_DUCK__
#define __NORMAL_DUCK__
#include "Duck.cpp"
#include <iostream>

class NormalDuck : Duck{
    public :
    void quack()override{
        std::cout<<"Quack\n";
    }
    void fly()override{
        std::cout<<"Duck Fly\n";
    }
};
#endif