#ifndef __NO_QAURTER_STATE__
#define __NO_QAURTER_STATE__
#include "UsefulMacros.hpp"
#include "AbstractState.hpp"
#include <iostream>

FWD_DECL_CLASS(NoQuarterState);

class NoQuarterState : AbstractState{
    public:
    NoQuarterState(GumballMachinePtr gumballMachine);
    void insertQuarter()override;
    void ejectQuarter()override;
    void dispense()override;
    void turnCranck()override;
    ~NoQuarterState();
};
#endif