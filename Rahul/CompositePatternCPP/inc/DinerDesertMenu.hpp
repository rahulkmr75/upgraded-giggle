#ifndef __DINER_DESSERT_MENU__
#define __DINER_DESSERT_MENU__
#include <iostream>
#include <memory>
#include <vector>
#include <AbstractMenu.hpp>
#include <DinerMenuIterator.hpp>

class DinerDessertMenu;
typedef std::shared_ptr<const DinerDessertMenu> DinerDessertMenuConstPtr;
typedef std::shared_ptr<DinerDessertMenu> DinerDessertMenuPtr;

class DinerDessertMenu : AbstractMenu{
    private:
    std::vector<AbstractMenuPtr> menu;
    public:
    void display()const override;
    void addChild(AbstractMenuPtr menuItem);
    void removeChild(AbstractMenuPtr menuItem);
    AbstractMenuIteratorPtr getIterator() override;
    ~DinerDessertMenu();
};

#endif