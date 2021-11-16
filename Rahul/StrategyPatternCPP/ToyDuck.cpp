#ifndef __TOY_DUCK__
#define __TOY_DUCK__

#include "Duck.cpp"
#include "NoFly.cpp"
#include "NoQuack.cpp"
class ToyDuck : Duck{
    public:
    ToyDuck() : Duck(
        (IFlyBehaviour *)(new NoFly()),
        (IQuackBehaviour *)(new NoQuack())
    ){}
};
#endif