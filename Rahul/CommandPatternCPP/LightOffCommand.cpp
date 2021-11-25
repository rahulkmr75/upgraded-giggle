#ifndef __LIGHT_OFF_COMMAND__
#define __LIGHT_OFF_COMMAND__

#include "Command.cpp"
#include "LightLivingRoom.cpp"

class LightOffCommand : Command{
    private:
    LightLivingRoom* light;
    public:
    LightOffCommand(LightLivingRoom * light){
        this->light = light;
    }
    void execute(){
        light->off();
    }
    void undo(){
        light->on();
    }
};
#endif