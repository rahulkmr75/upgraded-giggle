#include "WinnerState.hpp"

WinnerState::WinnerState(GumballMachinePtr gumballMachine):
AbstractState(gumballMachine){
}
void WinnerState::insertQuarter(){
    std::cout<<"Please wait while we dispense your gumball\n";
}
void WinnerState::ejectQuarter(){
    std::cout<<"Sorry! You already turned the crank.\n";
}
void WinnerState::dispense(){
    std::cout<<"You are a winner Congratulations!!\n";
    if(gumballMachine->getBallCount() > 0){
        gumballMachine->dispense(1);
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    }else{
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
    if(gumballMachine->getBallCount() > 0){
        gumballMachine->dispense(1);
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    }
    else{
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
}
void WinnerState::turnCranck(){
    std::cout<<"Please wait while we dispense your gumball\n";
}
WinnerState::~WinnerState(){}