#ifndef __NO_COMMAND__
#define __NO_COMMAND__

#include "Command.cpp"

class NoCommand : Command{
    public:
    void execute(){}
    void undo(){}
};
#endif