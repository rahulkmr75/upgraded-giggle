#include "SoldState.hpp"

SoldState::SoldState(GumballMachinePtr gumballMachine):
AbstractState(gumballMachine){
}
void SoldState::insertQuarter(){
    std::cout<<"Please wait while we dispense your gumball\n";
}
void SoldState::ejectQuarter(){
    std::cout<<"Sorry! You already turned the crank.\n";
}
void SoldState::dispense(){
    std::cout<<"You need to turn cranck to get a gumball\n";
    if(gumballMachine->getBallCount() > 0){
        gumballMachine->dispense(1);
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    }
    else{
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
}
void SoldState::turnCranck(){
    std::cout<<"Please wait while we dispense your gumball\n";
}
SoldState::~SoldState(){}