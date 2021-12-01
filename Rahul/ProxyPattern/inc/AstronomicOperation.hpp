#ifndef __ASTRONOMIC_OPERATION__
#define __ASTRONOMIC_OPERATION__
#include "UsefulMacros.hpp"
#include "AbstractOperation.hpp"

FWD_DECL_CLASS(AstronomicOperation);

class AstronomicOperation : AbstractOperation{
    public:
    void compute();
    int getCount();
    std::vector<double> getDistance();
    ~AstronomicOperation();
};
#endif