#include "..\inc\DinerMenuIterator.hpp"
#include "..\inc\MenuItem.hpp"

#include <vector>

DinerMenuIterator::DinerMenuIterator(std::vector<MenuItem *>menu){
    this->menu = menu;
    this->position = 0;
}
bool DinerMenuIterator::hasNext(){
    if(position < menu.size())
        return true;
    else
        return false;
}

MenuItem * DinerMenuIterator::next(){
    MenuItem *m = menu[position];
    position++;
    return m;
}