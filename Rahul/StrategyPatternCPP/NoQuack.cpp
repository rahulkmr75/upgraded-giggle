#ifndef __NO_QUACK__
#define __NO_QUACK__
#include "IQuackBehaviour.cpp"
#include <iostream>

class NoQuack : IQuackBehaviour{
public:
void quack()override{
    std::cout<<"**Silence**\n";
}
};
#endif