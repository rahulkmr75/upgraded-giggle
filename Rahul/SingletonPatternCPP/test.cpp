#include <iostream>
#include "ChocolateFactory.h"

int main(){
    auto chocolateFactory = ChocolateFactory::getInstance();
    ChocolateFactory * chocolateFactory2 = ChocolateFactory::getInstance();

    chocolateFactory2->setData(10);
    std::cout<<chocolateFactory->getData()<<std::endl;
    return 0;
}