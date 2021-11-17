#ifndef __CREAM_DECORATOR__
#define __CREAM_DECORATOR__
#include "ICondiment.cpp"
#include "IBeverage.cpp"

class CreamDecorator : public ICondiment{
    private:
    int cost = 20;
    std::string description = std::string(" with Cream");

    public:
    CreamDecorator(IBeverage *beverage):
        ICondiment(beverage){}
    int getCost(){
        return this->cost + beverage->getCost();
    }
    std::string getDescription(){
        return this->beverage->getDescription().append(this->description);
    }

};
#endif
