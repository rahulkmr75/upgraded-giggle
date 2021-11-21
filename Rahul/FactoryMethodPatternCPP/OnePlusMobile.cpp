#ifndef __ONEPLUS_MOBILE__
#define __ONEPLUS_MOBILE__
#include "Mobile.cpp"
#include <string>

class OnePlusMobile : Mobile{
    public:
    OnePlusMobile(double screenSize, std::string processorName):
    Mobile(screenSize , processorName)
    {
        brandName = std::string("OnePlus Phone");
    }
    
};
#endif