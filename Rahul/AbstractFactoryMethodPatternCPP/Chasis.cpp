#ifndef __CHASIS__
#define __CHASIS__

#include <string>

class Chasis{
    protected:
    enum ChasisType{F1_CHASIS , SEDAN_CHASIS , HATCHBACK_CHASIS , CONVERTIBLE_CHASIS , BATMOBILE_CHASIS};

    ChasisType chasisType;
    std::string coulour;

    Chasis(ChasisType chasisType , std::string colour):
    chasisType(chasisType)
    {
        this->coulour = colour;
    }

    public:
    virtual void displayProperty() = 0;

};
#endif
