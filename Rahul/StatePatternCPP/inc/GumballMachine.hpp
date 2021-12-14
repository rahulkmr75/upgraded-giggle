#ifndef __GUMBALL_MACHINE__
#define __GUMBALL_MACHINE__
#include "UsefulMacros.hpp"
#include "AbstractState.hpp"

FWD_DECL_CLASS(GumballMachine);
FWD_DECL_CLASS(AbstractState);

class GumballMachine{
    private:
    AbstractStatePtr noQuarterState;
    AbstractStatePtr hasQuarterState;
    AbstractStatePtr soldState;
    AbstractStatePtr soldOutState;
    AbstractStatePtr winnerState;

    AbstractStatePtr currentState;
    int gumball;

    public:
    GumballMachine(int);

    AbstractStatePtr getNoQuarterState();
    AbstractStatePtr getHasQuarterState();
    AbstractStatePtr getSoldState();
    AbstractStatePtr getSoldOutState();
    AbstractStatePtr getWinnerState();
    void setState(AbstractStatePtr);

    void addBall(int);
    int getBallCount();
    bool isWinner();

    void insertQuarter();
    void turnCranck();
    void ejectQuarter();
    void dispense(int);

    ~GumballMachine();
};
#endif