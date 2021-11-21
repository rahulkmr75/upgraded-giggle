#ifndef __MOBILE__
#define __MOBILE__
#include <string>
#include <iostream>

class Mobile{
    protected:
    double screenSize;
    std::string brandName;
    std::string processorName;
    std::string glassType;
    std::string finish;

    Mobile(double screenSize, std::string processorName):
    screenSize(screenSize),
    processorName(processorName)
    {
        this->setFinish(std::string("Matt"));
    }

    public:
    void setGlassType(std::string glassType){
        this->glassType = glassType;
    }
    void setFinish(std::string finish){
        this->finish = finish;
    }

    void display(){
        std::cout<<"Brand : "<< brandName<<std::endl;
        std::cout<<"ScreenSize : "<<screenSize<<std::endl;
        std::cout<<"ProcessorName : "<<processorName<<std::endl;
        std::cout<<"finish : " <<finish<<std::endl;
    }    
};
#endif