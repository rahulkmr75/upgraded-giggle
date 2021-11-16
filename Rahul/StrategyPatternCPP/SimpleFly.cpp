#ifndef __SIMPLE_FLY__
#define __SIMPLE_FLY__

#include "IFlyBehaviour.cpp"
#include <iostream>

class SimpleFly : IFlyBehaviour{
public:
void fly()override{
    std::cout<<"Simple Fly\n";
}
};
#endif