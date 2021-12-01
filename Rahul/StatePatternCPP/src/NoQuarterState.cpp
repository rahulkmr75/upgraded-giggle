#include "NoQuarterState.hpp"

NoQuarterState::NoQuarterState(GumballMachinePtr gumballMachine):
AbstractState(gumballMachine){
}
void NoQuarterState::insertQuarter(){
    std::cout<<"Please wait while we process your quarter\n";
    gumballMachine->setState(gumballMachine->getHasQuarterState());
}
void NoQuarterState::ejectQuarter(){
    std::cout<<"No availbale quarter to eject\n";
}
void NoQuarterState::dispense(){
    std::cout<<"You need to pay us to get a gumball\n";
}
void NoQuarterState::turnCranck(){
    std::cout<<"Insert a quarter first, you don't get stuff for free\n";
}
NoQuarterState::~NoQuarterState(){}