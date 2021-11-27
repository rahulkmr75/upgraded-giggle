#ifndef __COFFEE__
#define __COFFEE__
#include "CaffeineBeverage.cpp"

class Coffee : CaffeineBeverage{
    public:
    void brew()override{
        std::cout<<"Crush Coffee"<<std::endl;
    }
    void addCondiments()override{
        std::cout<<"Add milk and steam"<<std::endl;
    }
};

#endif