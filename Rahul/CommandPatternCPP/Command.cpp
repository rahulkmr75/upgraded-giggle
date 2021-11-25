#ifndef __COMMAND__
#define __COMMAND__

class Command{
    public:
    virtual void execute() = 0;
    virtual void undo() = 0;
};
#endif