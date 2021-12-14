#ifndef __MENU_ITEM__
#define __MENU_ITEM__
#include <iostream>
#include <AbstractMenu.hpp>
#include <memory>

class MenuItem;
typedef std::shared_ptr<const MenuItem> MenuItemConstPtr;
typedef std::shared_ptr<MenuItem> MenuItemPtr;

class MenuItem : AbstractMenu{
    private:

    std::string name;
    int cost;
    std::string description;

    public:
    MenuItem(std::string name , int cost , std::string description);
    void display()const override;
    AbstractMenuIteratorPtr getIterator()override;
    ~MenuItem();
};

#endif