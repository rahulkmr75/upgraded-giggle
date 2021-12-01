#ifndef __WINNER_STATE__
#define __WINNER_STATE__
#include "UsefulMacros.hpp"
#include "AbstractState.hpp"
#include <iostream>

FWD_DECL_CLASS(WinnerState);

class WinnerState : AbstractState{
    public:
    WinnerState(GumballMachinePtr gumballMachine);
    void insertQuarter()override;
    void ejectQuarter()override;
    void dispense()override;
    void turnCranck()override;
    ~WinnerState();
};
#endif