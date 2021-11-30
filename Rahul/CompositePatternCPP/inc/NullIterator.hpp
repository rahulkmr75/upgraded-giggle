#ifndef __NULL_ITERATOR__
#define __NULL_ITERATOR__
#include <AbstractMenuIterator.hpp>
#include <memory>

class NullIterator;
typedef std::shared_ptr<NullIterator> NullIteratorPtr;
typedef std::shared_ptr<const AbstractMenuIterator> NullIteratorConstPtr;

class NullIterator : AbstractMenuIterator{
    public:
    virtual bool hasNext();
    virtual AbstractMenuPtr getNext();
    virtual ~NullIterator();
};

#endif