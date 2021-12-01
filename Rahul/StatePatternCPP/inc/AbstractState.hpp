#ifndef __ABSTRACT_STATE__
#define __ABSTRACT_STATE__
#include "UsefulMacros.hpp"
#include "GumballMachine.hpp"
#include <iostream>

FWD_DECL_CLASS(GumballMachine);
FWD_DECL_CLASS(AbstractState);

class AbstractState{
    protected:
    GumballMachinePtr gumballMachine;
    public:
    AbstractState(GumballMachinePtr gumballMachine);
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void dispense() = 0;
    virtual void turnCranck() = 0;
    virtual ~AbstractState();
};
#endif