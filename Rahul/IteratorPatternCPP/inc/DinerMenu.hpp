#ifndef __DINER_MENU__
#define __DINER_MENU__
#include <vector>
#include <string>
#include "IMenu.hpp"

class MenuItem;

class DinerMenu : IMenu{
    public:
    void addItem(std::string name , int cost , std::string description)override;
    IMenuIterator * getIterator() override;

    private:
    std::vector<MenuItem *> menu;
};
#endif