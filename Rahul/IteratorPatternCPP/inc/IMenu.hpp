#ifndef __MENU__
#define __MENU__
#include <string>

class IMenuIterator;

class IMenu{
    public:
    virtual IMenuIterator * getIterator() = 0;
    virtual void addItem(std::string name , int cost , std::string description) = 0;
};

#endif