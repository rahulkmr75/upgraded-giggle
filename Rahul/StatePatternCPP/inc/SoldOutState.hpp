#ifndef __SOLD_OUT_STATE__
#define __SOLD_OUT_STATE__
#include "UsefulMacros.hpp"
#include "AbstractState.hpp"
#include <iostream>

FWD_DECL_CLASS(SoldOutState);

class SoldOutState : AbstractState{
    public:
    SoldOutState(GumballMachinePtr gumballMachine);
    void insertQuarter()override;
    void ejectQuarter()override;
    void dispense()override;
    void turnCranck()override;
    ~SoldOutState();
    
};
#endif