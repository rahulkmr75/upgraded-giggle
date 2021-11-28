#ifndef __PUB_MENU_ITERATOR__
#define __PUB_MENU_ITERATOR__
#include "..\inc\IMenuIterator.hpp"
#include "..\inc\MenuItem.hpp"
#include <vector>


class PubMenuIterator : IMenuIterator{
    public:
    PubMenuIterator(MenuItem * menu[] , int size);

    bool hasNext()override;

    MenuItem * next()override;

    private:

    MenuItem *menu[20];
    int size;
    int position;
};
#endif