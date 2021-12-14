#include "AbstractState.hpp"

AbstractState::AbstractState(GumballMachinePtr gumballMachine){
    this->gumballMachine = gumballMachine;
}
AbstractState::~AbstractState(){}