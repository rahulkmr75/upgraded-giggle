#ifndef __REMOTE__
#define __REMOTE__

#include "Command.cpp"
#include "NoCommand.cpp"

class Remote{
    private:
    Command * lbuttons[5];
    Command * rbuttons[5];
    Command * previouExecutedCommand;
    public:
    Remote(){
        for(int i = 0 ; i < 5 ; i++){
            lbuttons[i] = (Command *)(new NoCommand());
            rbuttons[i] = (Command *)(new NoCommand());
            previouExecutedCommand = (Command *)(new NoCommand());
        }
    }
    void setLSlot(int slot, Command * command ){
        lbuttons[slot] = command;
    }

    void setRSlot(int slot, Command * command ){
        rbuttons[slot] = command;
    }

    void pressL(int slot){
        lbuttons[slot]->execute();
        previouExecutedCommand = lbuttons[slot];
    }
    void pressR(int slot){
        rbuttons[slot]->execute();
        previouExecutedCommand = rbuttons[slot];
    }
    void pressUndo(){
        previouExecutedCommand->undo();
    }

};
#endif