#ifndef __OPPO_MOBILE__
#define __OPPO_MOBILE__
#include "Mobile.cpp"
#include <string>

class OppoMobile : Mobile{
    public:
    OppoMobile(double screenSize, std::string processorName):
    Mobile(screenSize , processorName)
    {
        brandName = std::string("Oppo Mobile");
    }
    
};
#endif