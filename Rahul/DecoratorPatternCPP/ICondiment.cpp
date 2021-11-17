#ifndef __ICONDIMENT__
#define __ICONDIMENT__
#include "IBeverage.cpp"
class ICondiment : public IBeverage{
    protected:
    IBeverage *beverage;
    public:
    ICondiment(IBeverage *beverage):
        beverage(beverage){

    }
    ~ICondiment(){}

};
#endif
