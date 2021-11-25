#ifndef __CEILING_FAN__
#define __CEILING_FAN__
#include <iostream>

class CeilingFan{
    private:
    enum State {OFF , LOW , MEDIUM , HIGH};
    State state;
    State previousState;
    public:
    CeilingFan(){
        state = OFF;
    }
    void step(){
        previousState = this->state;
        if(state == LOW)state = MEDIUM;
        else if(state == MEDIUM) state = HIGH;
        else state = LOW;
        std::cout<<"Ceiling Fan speed "<<state<<std::endl;
    }
    void off(){
        previousState = this->state;
        this->state = OFF;
        std::cout<<"Ceiling Fan Off "<<std::endl;
    }
    void setPreviousState(){
        this->state = previousState;
        std::cout<<"Ceiling Fan speed "<<state<<std::endl;
    }
};
#endif