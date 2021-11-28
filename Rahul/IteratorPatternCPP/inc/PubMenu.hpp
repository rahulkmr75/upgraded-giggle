#ifndef __PUB_MENU__
#define __PUB_MENU__
#include "IMenu.hpp"
#include <string>


class MenuItem;

class PubMenu : IMenu{
    public:
    void addItem(std::string name , int cost , std::string description)override;
    IMenuIterator * getIterator() override;

    private:
    MenuItem* menu[20];
    int size = 0;
};
#endif