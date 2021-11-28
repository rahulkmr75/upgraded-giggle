#ifndef __DINER_MENU_ITERATOR__
#define __DINER_MENU_ITERATOR__
#include "IMenuIterator.hpp"
#include <vector>

class MenuItem;

class DinerMenuIterator : IMenuIterator{
    public:
    DinerMenuIterator(std::vector<MenuItem *>menu);
    bool hasNext()override;
    MenuItem * next()override;
    
    private:
    std::vector<MenuItem *>menu;
    int position;
};
#endif