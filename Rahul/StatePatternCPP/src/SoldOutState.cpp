#include "SoldOutState.hpp"

SoldOutState::SoldOutState(GumballMachinePtr gumballMachine):
AbstractState(gumballMachine){
}
void SoldOutState::insertQuarter(){
    std::cout<<"Sorry we are out of gumballs\n";
}
void SoldOutState::ejectQuarter(){
    std::cout<<"Sorry we are out of gumballs, if you inserted any quarter it will be ejected soon.\n";
}
void SoldOutState::dispense(){
    std::cout<<"Sorry we are out of gumballs\n";   
}
void SoldOutState::turnCranck(){
    std::cout<<"Sorry we are out of gumballs\n";

}
SoldOutState::~SoldOutState(){}