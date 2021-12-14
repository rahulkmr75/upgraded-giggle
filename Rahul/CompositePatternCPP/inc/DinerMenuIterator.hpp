#ifndef __DINER_MENU_ITERATOR__
#define __DINER_MENU_ITERATOR__
#include <AbstractMenu.hpp>
#include <AbstractMenuIterator.hpp>
#include <memory>
#include <vector>

class DinerMenuIterator;
typedef std::shared_ptr<DinerMenuIterator> DinerMenuIteratorPtr;
typedef std::shared_ptr<const DinerMenuIterator> DinerMenuIteratorConstPtr;

class DinerMenuIterator : AbstractMenuIterator{
    private:
    std::vector<AbstractMenuPtr> menu;
    int ptr;
    public:
    DinerMenuIterator(std::vector<AbstractMenuPtr> menu);
    bool hasNext() override;
    AbstractMenuPtr getNext()override;
    ~DinerMenuIterator();
};

#endif