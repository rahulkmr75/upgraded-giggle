#ifndef __ABSTRACT_OPERATION__
#define __ABSTRACT_OPERATION__
#include "UsefulMacros.hpp"
#include <vector>

FWD_DECL_CLASS(AbstractOperation);

class AbstractOperation{
    protected:
    int starsObserved;
    std::vector<double> distance;
    public:
    AbstractOperation();
    virtual void compute() = 0;
    virtual int getCount() = 0;
    virtual std::vector<double> getDistance() = 0;
    virtual ~AbstractOperation();
};
#endif