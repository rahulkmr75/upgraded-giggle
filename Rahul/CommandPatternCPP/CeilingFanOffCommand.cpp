#ifndef __CEILING_FAN_OFF_COMMAND__
#define __CEILING_FAN_OFF_COMMAND__

#include "Command.cpp"
#include "CeilingFan.cpp"

class CeilingFanOffCommand : Command{
    private:
    CeilingFan * ceilingFan;
    public:
    CeilingFanOffCommand(CeilingFan * ceilingFan){
        this->ceilingFan = ceilingFan;
    }
    void execute(){
        ceilingFan->off();
    }
    void undo(){
        ceilingFan->step();
    }
};
#endif