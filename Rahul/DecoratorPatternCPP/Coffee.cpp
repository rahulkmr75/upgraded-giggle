#ifndef __COFFEE__
#define __COFFEE__
#include "IBeverage.cpp"
class Coffee : IBeverage{
    private:
    int cost = 10;
    std::string description = std::string("Coffee");
    public:
    Coffee(){}
    Coffee(int cost , std::string description) :
        cost(cost),description(description){}
    int getCost()override{
        return this->cost;
    }
    std::string getDescription()override{
        return this->description;
    }
};
#endif
