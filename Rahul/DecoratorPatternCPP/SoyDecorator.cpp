#ifndef __SOY_DECORATOR__
#define __SOY_DECORATOR__
#include "ICondiment.cpp"
#include "IBeverage.cpp"

class SoyDecorator : public ICondiment{
    private:
    int cost = 15;
    std::string description = std::string(" with Soy");

    public:
    SoyDecorator(IBeverage *beverage):
        ICondiment(beverage){}
    int getCost(){
        return this->cost + beverage->getCost();
    }
    std::string getDescription(){
        return this->beverage->getDescription().append(this->description);
    }

};
#endif
