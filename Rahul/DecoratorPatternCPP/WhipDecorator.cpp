#ifndef __WHIP_DECORATOR__
#define __WHIP_DECORATOR__
#include "ICondiment.cpp"
#include "IBeverage.cpp"

class WhipDecorator : public ICondiment{
    private:
    int cost = 25;
    std::string description = std::string(" with Whip");

    public:
    WhipDecorator(IBeverage *beverage):
        ICondiment(beverage){}
    int getCost(){
        return this->cost + beverage->getCost();
    }
    std::string getDescription(){
        return this->beverage->getDescription().append(this->description);
    }

};
#endif
