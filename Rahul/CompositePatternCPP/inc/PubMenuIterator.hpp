#ifndef __PUB_MENU_ITERATOR__
#define __PUB_MENU_ITERATOR__
#include <AbstractMenu.hpp>
#include <AbstractMenuIterator.hpp>
#include <memory>
#include <vector>

class PubMenuIterator;
typedef std::shared_ptr<PubMenuIterator> PubMenuIteratorPtr;
typedef std::shared_ptr<const PubMenuIterator> PubMenuIteratorConstPtr;

class PubMenuIterator : AbstractMenuIterator{
    private:
    static const int MaxSize = 20;
    int size = 0;
    AbstractMenuPtr menu[MaxSize];
    int ptr;
    public:
    PubMenuIterator(AbstractMenuPtr menu[MaxSize] , int size);
    bool hasNext() override;
    AbstractMenuPtr getNext()override;
    ~PubMenuIterator();
};

#endif