#ifndef __JUMP_FLY__
#define __JUMP_FLY__
#include "IFlyBehaviour.cpp"
#include <iostream>

class JumpFly : IFlyBehaviour{
public:
void fly()override{
    std::cout<<"Jump and Fly\n";
}
};
#endif