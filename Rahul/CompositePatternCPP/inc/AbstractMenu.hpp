#ifndef __ABSTRACT_MENU__
#define __ABSTRACT_MENU__
#include <iostream>
#include <memory>
#include <AbstractMenuIterator.hpp>

class AbstractMenu;
typedef std::shared_ptr<const AbstractMenu> AbstractMenuConstPtr;
typedef std::shared_ptr<AbstractMenu> AbstractMenuPtr;

class AbstractMenuIterator;
typedef std::shared_ptr<AbstractMenuIterator> AbstractMenuIteratorPtr;
typedef std::shared_ptr<const AbstractMenuIterator> AbstractMenuIteratorConstPtr;

class AbstractMenu{
    public:
    virtual void display()const = 0;
    virtual void addChild(AbstractMenuPtr menuItem);
    virtual void removeChild(AbstractMenuPtr menuItem);
    virtual AbstractMenuIteratorPtr getIterator() = 0;
    virtual ~AbstractMenu();
};

#endif