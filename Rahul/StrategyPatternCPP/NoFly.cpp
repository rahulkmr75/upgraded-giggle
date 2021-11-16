#ifndef __NO_FLY__
#define __NO_FLY__

#include "IFlyBehaviour.cpp"
#include <iostream>

class NoFly : IFlyBehaviour{
public:
void fly(){
    std::cout<<"**Do Nothing**\n";
}
};
#endif