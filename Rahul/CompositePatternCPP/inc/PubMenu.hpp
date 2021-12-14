#ifndef __PUB_MENU__
#define __PUB_MENU__
#include <iostream>
#include <memory>
#include <vector>
#include <AbstractMenu.hpp>
#include <PubMenuIterator.hpp>

class PubMenu;
typedef std::shared_ptr<const PubMenu> PubMenuConstPtr;
typedef std::shared_ptr<PubMenu> PubMenuPtr;

class PubMenu : AbstractMenu{
    private:
    static const int MaxSize = 20;
    int size = 0;
    AbstractMenuPtr menu[MaxSize];
    public:

    void display()const;
    void addChild(AbstractMenuPtr menuItem);
    virtual void removeChild(AbstractMenuPtr menuItem);
    AbstractMenuIteratorPtr getIterator();
    ~PubMenu();
};

#endif