#include <DinerMenuIterator.hpp>
DinerMenuIterator::DinerMenuIterator(std::vector<AbstractMenuPtr> menu){
    this->menu = menu;
    ptr = 0;
}
bool DinerMenuIterator::hasNext(){
    return ptr < menu.size();
}
AbstractMenuPtr DinerMenuIterator::getNext(){
    AbstractMenuPtr menuItem = menu[ptr];
    ptr++;
    return menuItem;
}
DinerMenuIterator::~DinerMenuIterator(){}