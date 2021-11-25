#ifndef __STEREO_VOLUME_DECREASE_COMMAND__
#define __STEREO_VOLUME_DECREASE_COMMAND__

#include "Command.cpp"
#include "Stereo.cpp"

class StereoVolumeDecreaseCommand : Command{
    private:
    Stereo* stereo;
    public:
    StereoVolumeDecreaseCommand(Stereo* stereo){
        this->stereo = stereo;
    }
    void execute(){
        stereo->decreaseVolume();
    }
    void undo(){
        stereo->increaseVolume();
    }
};
#endif