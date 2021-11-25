#ifndef __LIGHT_ON_COMMAND__
#define __LIGHT_ON_COMMAND__

#include "Command.cpp"
#include "LightLivingRoom.cpp"

class LightOnCommand : Command{
    private:
    LightLivingRoom* light;
    public:
    LightOnCommand(LightLivingRoom * light){
        this->light = light;
    }
    void execute(){
        light->on();
    }
    void undo(){
        light->off();
    }
};
#endif