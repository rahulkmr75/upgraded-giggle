#include "ChocolateFactory.h"

ChocolateFactory * ChocolateFactory::singleton = nullptr;

ChocolateFactory::ChocolateFactory(){}

ChocolateFactory * ChocolateFactory::getInstance(){
    if(singleton == nullptr){
        singleton = new ChocolateFactory();
    }
    return singleton;
}
void ChocolateFactory::setData(int data){
    this->data = data;
}
int ChocolateFactory::getData(){
    return this->data;
}