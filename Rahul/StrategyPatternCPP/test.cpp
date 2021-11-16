#include <iostream>
#include "Duck.cpp"
#include "SimpleDuck.cpp"
#include "JumpFly.cpp"
#include "ToyDuck.cpp"
int main(){
    Duck *d = (Duck *)(new SimpleDuck());
    d->fly();
    d->quack();
    d->setFlyBehaviour((IFlyBehaviour *)(new JumpFly()));
    d->fly();

    Duck *td = (Duck *)(new ToyDuck());
    td->fly();
    td->quack();
    td->setQuackBehaviour((IQuackBehaviour *)(new SimpleQuack()));
    td->quack();
    td->swim();
    d->swim();
    return 0;
}