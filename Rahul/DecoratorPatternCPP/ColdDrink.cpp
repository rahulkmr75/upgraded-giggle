#ifndef __COLD_DRINK__
#define __COLD_DRINK__
#include "IBeverage.cpp"
class ColdDrink : IBeverage{
    private:
    int cost = 10;
    std::string description = std::string("ColdDrink");
    public:
    ColdDrink(int cost , std::string description) :
        cost(cost),description(description){}
    int getCost()override{
        return this->cost;
    }
    std::string getDescription()override{
        return this->description;
    }
};
#endif