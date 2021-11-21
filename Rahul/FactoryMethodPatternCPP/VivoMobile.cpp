#ifndef __VIVO_MOBILE__
#define __VIVO_MOBILE__
#include "Mobile.cpp"
#include <string>

class VivoMobile : Mobile{

    public:
    VivoMobile(double screenSize, std::string processorName):
    Mobile(screenSize , processorName)
    {
        brandName = std::string("Vivo Mobile");
    }
    const std::string getBrandName(){
        return brandName; 
    }
    
};
#endif