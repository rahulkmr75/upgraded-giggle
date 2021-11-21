#ifndef __MOBILE_FACTORY__
#define __MOBILE_FACTORY__

#include "Mobile.cpp"

class MobileFactory{
    protected:
    virtual Mobile* make(double screenSize , std::string brandName , std::string processorName) = 0;
    public:
    Mobile* orderMobile(double screenSize , std::string brandName , std::string processorName){
        Mobile * mobile = make(screenSize , brandName , processorName);
        return mobile;

    }
};
#endif