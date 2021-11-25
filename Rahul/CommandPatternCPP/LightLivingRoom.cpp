#ifndef __LIGHT_LIVING_ROOM__
#define __LIGHT_LIVING_ROOM__
#include <iostream>

class LightLivingRoom{
    private:
    bool state;
    public:
    LightLivingRoom(){
    }
    void on(){
        this->state = true;
        std::cout<<"Light On\n";
    }
    void off(){
        this->state = false;
        std::cout<<"Light On\n";
    }
};
#endif