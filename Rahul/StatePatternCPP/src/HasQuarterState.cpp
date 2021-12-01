#include "HasQuarterState.hpp"

HasQuarterState::HasQuarterState(GumballMachinePtr gumballMachine):
AbstractState(gumballMachine){
}
void HasQuarterState::insertQuarter(){
    std::cout<<"Please wait while we process your quarter\n";
}
void HasQuarterState::ejectQuarter(){
    std::cout<<"Here is your quarter. Have a good day!\n";
    gumballMachine->setState(gumballMachine->getNoQuarterState());
}
void HasQuarterState::dispense(){
    std::cout<<"You need to turn crank to get a gumball\n";
}
void HasQuarterState::turnCranck(){
    std::cout<<"You request has been noted, please wait while we dispense you gumball\n";
    if(gumballMachine->isWinner())
        gumballMachine->setState(gumballMachine->getWinnerState());
    else{
        gumballMachine->setState(gumballMachine->getSoldState());
    }
}
HasQuarterState::~HasQuarterState(){}