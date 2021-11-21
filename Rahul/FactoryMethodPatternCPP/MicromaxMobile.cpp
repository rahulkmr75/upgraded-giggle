#ifndef __MICROMAX_MOBILE__
#define __MICROMAX_MOBILE__
#include "Mobile.cpp"
#include <string>

class MicromaxMobile : Mobile{
    public:
    MicromaxMobile(double screenSize, std::string processorName):
    Mobile(screenSize , processorName)
    {
        brandName = std::string("MicroMax Phone");
    }
    
};
#endif