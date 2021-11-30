#include <PubMenuIterator.hpp>

PubMenuIterator::PubMenuIterator(AbstractMenuPtr menu[MaxSize] , int size){
    for(int i = 0 ; i < size ; i++){
        this->menu[i] = menu[i];
    }
    this->size = size;
    ptr = 0;
}
bool PubMenuIterator::hasNext(){
    return ptr < size;
}
AbstractMenuPtr PubMenuIterator::getNext(){
    AbstractMenuPtr menuItem = menu[ptr];
    ptr++;
    return menuItem;
}
PubMenuIterator::~PubMenuIterator(){}