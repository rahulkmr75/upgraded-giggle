#ifndef __HAS_QAURTER_STATE__
#define __HAS_QAURTER_STATE__
#include "UsefulMacros.hpp"
#include "AbstractState.hpp"
#include <iostream>

FWD_DECL_CLASS(HasQuarterState);

class HasQuarterState : AbstractState{
    public:
    HasQuarterState(GumballMachinePtr gumballMachine);
    void insertQuarter()override;
    void ejectQuarter()override;
    void dispense()override;
    void turnCranck()override;
    ~HasQuarterState();
};
#endif