#include "IQuackBehaviour.cpp"
#include <iostream>

class SimpleQuack : IQuackBehaviour{
public:
void quack()override{
    std::cout<<"Simple Quack\n";
}
};