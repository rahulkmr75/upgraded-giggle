#include "SoyDecorator.cpp"
#include "Coffee.cpp"
#include "WhipDecorator.cpp"
#include "IceDecorator.cpp"
#include "CreamDecorator.cpp"
#include <iostream>

int main(){
    IBeverage *coffee = (IBeverage *)(new Coffee());
    coffee = (IBeverage *)new SoyDecorator(coffee);
    coffee = (IBeverage *)new WhipDecorator(coffee);
    coffee = (IBeverage *)new WhipDecorator(coffee);
    
    std::cout<<coffee->getCost()<<std::endl;
    std::cout<<coffee->getDescription()<<std::endl;
    return 0;
}