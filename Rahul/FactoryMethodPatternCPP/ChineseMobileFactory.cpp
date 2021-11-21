#ifndef __CHINESE_MOBILE_FACTORY__
#define __CHINESE_MOBILE_FACTORY__
#include "MobileFactory.cpp"

#include "Mobile.cpp"
#include"VivoMobile.cpp"
#include "OppoMobile.cpp"
#include "OnePlusMobile.cpp"

#include <string>

class ChineseMobileFactory : MobileFactory{
    Mobile * make(double screenSize , std::string brandName , std::string processorName){
        if(brandName.compare(std::string("Vivo Mobile")) == 0){
            return (Mobile * )(new VivoMobile(screenSize , processorName));
        }
        else if(brandName.compare(std::string("Oppo Mobile")) == 0 ){
            return (Mobile * )(new OppoMobile(screenSize , processorName));

        }
        else{
            return (Mobile * )(new OnePlusMobile(screenSize , processorName));

        }
    }
};
#endif