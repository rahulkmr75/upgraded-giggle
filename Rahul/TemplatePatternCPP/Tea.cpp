#ifndef __TEA__
#define __TEA__
#include "CaffeineBeverage.cpp"

class Tea : CaffeineBeverage{
    public:
    void brew()override{
        std::cout<<"Add tea bag and strain"<<std::endl;
    }
    void addCondiments()override{
        std::cout<<"Add water, lemon and steam"<<std::endl;
    }
};

#endif