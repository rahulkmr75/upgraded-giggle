#ifndef __STEREO__
#define __STEREO__
#include <iostream>

class Stereo{
    private:
    bool state;
    int volume;
    const int maxVolume = 10;
    public:
    Stereo(){
        state = false;
        volume = 0;
    }
    void on(){
        state = true;
        std::cout<<"Stereo On\n";
    }
    void off(){
        state = false;
        std::cout<<"Stereo Off\n";
    }
    void increaseVolume(){
        volume += 1;
        volume %= maxVolume;
        std::cout<<"Stereo Volume "<<volume<<std::endl;
    }
    void decreaseVolume(){
        volume -= 1;
        if(volume < 0)volume = 0;
        std::cout<<"Stereo Volume "<<volume<<std::endl;
    }
};

#endif