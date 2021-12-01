#include "AbstractState.hpp"
#include "GumballMachine.hpp"

int main(){
    GumballMachinePtr gumballMachine(new GumballMachine(10));

    gumballMachine->insertQuarter();
    gumballMachine->turnCranck();

    gumballMachine->insertQuarter();
    gumballMachine->ejectQuarter();

    gumballMachine->insertQuarter();
    gumballMachine->turnCranck();

    gumballMachine->insertQuarter();
    gumballMachine->turnCranck();
    gumballMachine->insertQuarter();
    gumballMachine->turnCranck();
    gumballMachine->insertQuarter();
    gumballMachine->turnCranck();
    gumballMachine->insertQuarter();
    gumballMachine->turnCranck();
    gumballMachine->insertQuarter();
    gumballMachine->turnCranck();
    gumballMachine->insertQuarter();
    gumballMachine->turnCranck();

    return 0;
}