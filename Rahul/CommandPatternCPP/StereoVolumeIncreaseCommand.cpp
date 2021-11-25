#ifndef __STEREO_VOLUME_INCREASE_COMMAND__
#define __STEREO_VOLUME_INCREASE_COMMAND__

#include "Command.cpp"
#include "Stereo.cpp"

class StereoVolumeIncreaseCommand : Command{
    private:
    Stereo* stereo;
    public:
    StereoVolumeIncreaseCommand(Stereo* stereo){
        this->stereo = stereo;
    }
    void execute(){
        stereo->increaseVolume();
    }
    void undo(){
        stereo->decreaseVolume();
    }
};
#endif