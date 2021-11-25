#ifndef __STEREO_ON_COMMAND__
#define __STEREO_ON_COMMAND__

#include "Command.cpp"
#include "Stereo.cpp"

class StereoOnCommand : Command{
    private:
    Stereo* stereo;
    public:
    StereoOnCommand(Stereo* stereo){
        this->stereo = stereo;
    }
    void execute(){
        stereo->on();
    }
    void undo(){
        stereo->off();
    }
};
#endif