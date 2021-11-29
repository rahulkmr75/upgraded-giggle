#include "..\inc\PubMenuIterator.hpp"
#include "..\inc\MenuItem.hpp"
#include <vector>

PubMenuIterator::PubMenuIterator(MenuItem * menu[] , int size){
    for(int i = 0 ; i < size ; ++i)this->menu[i] = menu[i];
    this->size = size;
    this->position = 0;
}
bool PubMenuIterator::hasNext(){
    if(position < size)
        return true;
    else
        return false;
}

MenuItem * PubMenuIterator::next(){
    MenuItem *m = menu[position];
    position++;
    return m;
}