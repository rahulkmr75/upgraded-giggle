#ifndef __INDIAN_MOBILE_FACTORY__
#define __INDIAN_MOBILE_FACTORY__
#include "MobileFactory.cpp"

#include"MicromaxMobile.cpp"
#include "LavaMobile.cpp"

#include <string>

class IndianMobileFactory : MobileFactory{
    Mobile * make(double screenSize , std::string brandName , std::string processorName){
        if(brandName.compare(std::string("MicroMax Phone")) == 0){
            return (Mobile * )(new MicromaxMobile(screenSize , processorName));
        }
        else{
            return (Mobile * )(new LavaMobile(screenSize , processorName));

        }
    }
};
#endif