#ifndef __LAVA_MOBILE__
#define __LAVA_MOBILE__
#include "Mobile.cpp"
#include <string>

class LavaMobile : Mobile{
    public:
    LavaMobile(double screenSize, std::string processorName):
    Mobile(screenSize , processorName)
    {
        brandName = std::string("Lava Mobile");
    }
    
};
#endif