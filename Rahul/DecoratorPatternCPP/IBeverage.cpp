#ifndef __BEVERAGE__
#define __BEVERAGE__
#include <string>
class IBeverage{
    public:
    ~IBeverage(){}
    virtual std::string getDescription() = 0;
    virtual int getCost() = 0;
};
#endif
