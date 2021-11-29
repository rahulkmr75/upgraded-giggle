#ifndef __INTERFACE_MENU_ITERATOR__
#define __INTERFACE_MENU_ITERATOR__

class MenuItem;

class IMenuIterator{
    public:
    virtual bool hasNext() = 0;
    virtual MenuItem * next() = 0;
};
#endif