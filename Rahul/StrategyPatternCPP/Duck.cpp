#ifndef __DUCK__
#define __DUCK__
#include "IFlyBehaviour.cpp"
#include "IQuackBehaviour.cpp"
#include <iostream>

class Duck{
    private:
    IFlyBehaviour *flyBehaviour;
    IQuackBehaviour *quackBehaviour;
    public:
    Duck(IFlyBehaviour *flyBehaviour , IQuackBehaviour *quackBehaviour):
    flyBehaviour(flyBehaviour) , quackBehaviour(quackBehaviour){
    }
    void setFlyBehaviour(IFlyBehaviour *flyBehaviour){
        delete( this->flyBehaviour );
        this->flyBehaviour = flyBehaviour;
    }
    void setQuackBehaviour(IQuackBehaviour *quackBehaviour){
        delete( this->quackBehaviour );
        this->quackBehaviour = quackBehaviour;
    }
    void fly(){
        this->flyBehaviour->fly();
    }
    void quack(){
        this->quackBehaviour->quack();
    }
    void swim(){
        std::cout<<"Swim\n";
    }
};
#endif