#ifndef __SOLD_STATE__
#define __SOLD_STATE__
#include "UsefulMacros.hpp"
#include "AbstractState.hpp"
#include <iostream>

FWD_DECL_CLASS(SoldState);

class SoldState : AbstractState{
    public:
    SoldState(GumballMachinePtr gumballMachine);
    void insertQuarter()override;
    void ejectQuarter()override;
    void dispense()override;
    void turnCranck()override;
    ~SoldState();

};
#endif