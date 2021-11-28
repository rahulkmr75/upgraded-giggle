#include "..\inc\PubMenu.hpp"
#include "..\inc\PubMenuIterator.hpp"
#include "..\inc\MenuItem.hpp"
#include <vector>
#include <iostream>

void PubMenu::addItem(std::string name , int cost , std::string description){
    if(size == 20){
        std::cout<<"Menu Full\n";
        return;
    }
    MenuItem * menuItem = new MenuItem(name , cost , description);
    menu[size] = menuItem;
    size++;
}
IMenuIterator * PubMenu::getIterator(){
    return (IMenuIterator *)new PubMenuIterator(menu , size);
}