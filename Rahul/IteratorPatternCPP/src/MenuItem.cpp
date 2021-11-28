#include <iostream>
#include <string>
#include "..\inc\MenuItem.hpp"

MenuItem::MenuItem(std::string name , int cost , std::string description) :
    name(name),
    cost(cost),
    description(description){}
    
std::string MenuItem::getName(){
    return this->name;
}
int MenuItem::getCost(){
    return this->cost;
}
std::string MenuItem::getDescription(){
    return this->description;
}

void MenuItem::display(){
    std::cout<<name<<"\t";
    std::cout<<cost<<"\t";
    std::cout<<description<<"\n";
}
