#ifndef __CEILING_FAN_STEP_COMMAND__
#define __CEILING_FAN_STEP_COMMAND__

#include "Command.cpp"
#include "CeilingFan.cpp"

class CeilingFanStepCommand : Command{
    private:
    CeilingFan * ceilingFan;
    public:
    CeilingFanStepCommand(CeilingFan * ceilingFan){
        this->ceilingFan = ceilingFan;
    }
    void execute(){
        ceilingFan->step();
    }
    void undo(){
        ceilingFan->setPreviousState();
    }
};
#endif