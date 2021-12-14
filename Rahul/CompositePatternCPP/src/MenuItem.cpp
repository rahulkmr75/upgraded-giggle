#include <MenuItem.hpp>
#include <NullIterator.hpp>

MenuItem::MenuItem(std::string name , int cost , std::string description){
    this->name = name;
    this->cost = cost;
    this->description = description;
}


void MenuItem::display()const{
    std::cout<<name<<"\t";
    std::cout<<cost <<"\t";
    std::cout<<description<<"\n";
}

AbstractMenuIteratorPtr MenuItem::getIterator(){
    return AbstractMenuIteratorPtr((AbstractMenuIterator *)new NullIterator());
}

MenuItem::~MenuItem(){}