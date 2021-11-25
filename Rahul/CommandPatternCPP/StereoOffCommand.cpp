#ifndef __STEREO_OFF_COMMAND__
#define __STEREO_OFF_COMMAND__

#include "Command.cpp"
#include "Stereo.cpp"

class StereoOffCommand : Command{
    private:
    Stereo* stereo;
    public:
    StereoOffCommand(Stereo* stereo){
        this->stereo = stereo;
    }
    void execute(){
        stereo->off();
    }
    void undo(){
        stereo->on();
    }
};
#endif