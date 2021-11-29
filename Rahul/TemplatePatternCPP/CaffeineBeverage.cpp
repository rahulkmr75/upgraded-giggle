#ifndef __CAFFEINE_BEVERAGE__
#define __CAFFEINE_BEVERAGE__
#include <iostream>

class CaffeineBeverage{
    protected:
    bool decoratingHook;
    public:
    CaffeineBeverage(){
        decoratingHook = true;
    }
    void prepare(){
        boilWater();
        brew();
        pourToCup();
        addCondiments();
        if(decoratingHook)
            decorate();
    }
    void boilWater(){
        std::cout<<"Boiling Water"<<std::endl;
    }
    virtual void brew() = 0;
    void pourToCup(){
        std::cout<<"Pour to Cofee"<<std::endl;
    }
    virtual void addCondiments() = 0;
    void decorate(){
        std::cout<<"Decorating"<<std::endl;
    }

    void setDecoratingHook(bool decoratingHook){
        this->decoratingHook = decoratingHook;
    }

};
#endif