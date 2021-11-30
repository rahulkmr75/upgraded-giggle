#include <NullIterator.hpp>
bool NullIterator::hasNext(){
    return false;
}
AbstractMenuPtr NullIterator::getNext(){
    return AbstractMenuPtr(nullptr);
}
NullIterator:: ~NullIterator(){
}