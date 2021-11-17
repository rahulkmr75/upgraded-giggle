#ifndef __TEA__
#define __TEA__
#include "IBeverage.cpp"
class Tea : IBeverage{
    private:
    int cost = 20;
    std::string description = std::string("Tea");
    public:
    Tea(int cost , std::string description) :
        cost(cost),description(description){}
    int getCost()override{
        return this->cost;
    }
    std::string getDescription()override{
        return this->description;
    }
};
#endif