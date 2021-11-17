#ifndef __ICE_DECORATOR__
#define __ICE_DECORATOR__
#include "ICondiment.cpp"
#include "IBeverage.cpp"

class IceDecorator : public ICondiment{
    private:
    int cost = 5;
    std::string description = std::string(" with Ice");

    public:
    IceDecorator(IBeverage *beverage):
        ICondiment(beverage){}
    int getCost(){
        return this->cost + beverage->getCost();
    }
    std::string getDescription(){
        return this->beverage->getDescription().append(this->description);
    }

};
#endif
