#ifndef __PROXY_ASTRONOMIC_OPERATION__
#define __PROXY_ASTRONOMIC_OPERATION__
#include "UsefulMacros.hpp"
#include "AbstractOperation.hpp"

FWD_DECL_CLASS(ProxyAstronomicOperation);

class ProxyAstronomicOperation : AbstractOperation{
    private:
    AbstractOperationPtr subject;
    bool readStatus;
    public:
    ProxyAstronomicOperation();
    void compute();
    int getCount();
    std::vector<double> getDistance();
    ~ProxyAstronomicOperation();
};
#endif