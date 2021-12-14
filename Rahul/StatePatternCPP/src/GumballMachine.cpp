#include "GumballMachine.hpp"
#include "NoQuarterState.hpp"
#include "HasQuarterState.hpp"
#include "SoldState.hpp"
#include "SoldOutState.hpp"
#include "WinnerState.hpp"

GumballMachine::GumballMachine(int balls){
    this->gumball = balls;
    this->noQuarterState = AbstractStatePtr((AbstractState *) new NoQuarterState(GumballMachinePtr(this)) );
    this->hasQuarterState = AbstractStatePtr((AbstractState *) new HasQuarterState(GumballMachinePtr(this)) );
    this->soldState = AbstractStatePtr((AbstractState *) new SoldState(GumballMachinePtr(this)) );
    this->soldOutState = AbstractStatePtr((AbstractState *) new SoldOutState(GumballMachinePtr(this)) );
    this->winnerState = AbstractStatePtr((AbstractState *) new WinnerState(GumballMachinePtr(this)) );
    this->currentState = noQuarterState;
}
void GumballMachine::setState(AbstractStatePtr state){
    this->currentState = state;
}
AbstractStatePtr GumballMachine::getNoQuarterState(){
    return this->noQuarterState;
}
AbstractStatePtr GumballMachine::getHasQuarterState(){
    return this->hasQuarterState;
}
AbstractStatePtr GumballMachine::getSoldState(){
    return this->soldState;
}
AbstractStatePtr GumballMachine::getSoldOutState(){
    return this->soldOutState;
}
AbstractStatePtr GumballMachine::getWinnerState(){
    return this->winnerState;
}
void GumballMachine::addBall(int balls){
    this->gumball += balls;
}
void GumballMachine::dispense(int balls){
    if(this->gumball > 0){
        std::cout<<"Here is you gumball, enjoy!!\n";
        this->gumball -= 1;
    }
    else{
        std::cout<<"Sorry we are out of gumballs!!\n";
    }
}
bool GumballMachine::isWinner(){
    return ( (rand() % 10) == 1 );
}
int GumballMachine::getBallCount(){
    return this->gumball;
}

void GumballMachine::insertQuarter(){
    this->currentState->insertQuarter();
}
void GumballMachine::turnCranck(){
    this->currentState->turnCranck();
    this->currentState->dispense();
}
void GumballMachine::ejectQuarter(){
    this->currentState->ejectQuarter();
}

GumballMachine::~GumballMachine(){}
