#ifndef __DINER_MENU__
#define __DINER_MENU__
#include <iostream>
#include <memory>
#include <vector>
#include <AbstractMenu.hpp>
#include <DinerMenuIterator.hpp>

class DinerMenu;
typedef std::shared_ptr<const DinerMenu> DinerMenuConstPtr;
typedef std::shared_ptr<DinerMenu> DinerMenuPtr;

class DinerMenu : AbstractMenu{
    private:
    std::vector<AbstractMenuPtr> menu;
    public:
    void display()const override;
    void addChild(AbstractMenuPtr menuItem);
    void removeChild(AbstractMenuPtr menuItem);
    AbstractMenuIteratorPtr getIterator()override;
    ~DinerMenu();
};

#endif