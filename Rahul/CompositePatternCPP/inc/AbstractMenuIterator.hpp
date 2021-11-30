#ifndef __ABSTRACT_MENU_ITERATOR__
#define __ABSTRACT_MENU_ITERATOR__
#include <AbstractMenu.hpp>
#include <memory>

class AbstractMenuIterator;
typedef std::shared_ptr<AbstractMenuIterator> AbstractMenuIteratorPtr;
typedef std::shared_ptr<const AbstractMenuIterator> AbstractMenuIteratorConstPtr;

class AbstractMenu;
typedef std::shared_ptr<AbstractMenu> AbstractMenuPtr;
typedef std::shared_ptr<const AbstractMenu> AbstractMenuConstPtr;

class AbstractMenuIterator{
    public:
    virtual bool hasNext() = 0;
    virtual AbstractMenuPtr getNext() = 0;
    virtual ~AbstractMenuIterator();
};

#endif