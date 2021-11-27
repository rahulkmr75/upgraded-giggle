#ifndef __ADAPTER_TURKEY__
#define __ADAPTER_TURKEY__
#include "Turkey.cpp"
#include "NormalDuck.cpp"
#include <iostream>

class AdapterTurkey : Turkey{
    Duck* duck;
    public :
    AdapterTurkey(){
        this->duck = (Duck *)(new NormalDuck()) ;
    }
    ~AdapterTurkey(){
        delete duck;
    }
    void gobble()override{
        duck->quack();
    }
    void fly()override{
        duck->fly();
    }
};
#endif