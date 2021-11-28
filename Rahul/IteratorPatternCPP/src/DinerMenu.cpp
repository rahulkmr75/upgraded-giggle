#include "..\inc\DinerMenu.hpp"
#include "..\inc\DinerMenuIterator.hpp"
#include "..\inc\MenuItem.hpp"

#include <vector>

void DinerMenu::addItem(std::string name , 
        int cost , std::string description){
    menu.push_back(new MenuItem(name , cost , description));
}
IMenuIterator * DinerMenu::getIterator(){
    return (IMenuIterator *)new DinerMenuIterator(menu);
}