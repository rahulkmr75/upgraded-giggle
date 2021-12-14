#include "ProxyAstronomicOperation.hpp"
#include "AstronomicOperation.hpp"

ProxyAstronomicOperation::ProxyAstronomicOperation(){
    readStatus = false;
    subject =  AbstractOperationPtr((AbstractOperation *) new AstronomicOperation());
}
void ProxyAstronomicOperation::compute(){
    readStatus = false;
}
int ProxyAstronomicOperation::getCount(){
    if(readStatus){
        return subject->getCount();
    }
    else{
        subject->compute();
        readStatus = true;
        return subject->getCount();
    }
}
std::vector<double> ProxyAstronomicOperation::getDistance(){
    if(readStatus){
        return subject->getDistance();
    }
    else{
        subject->compute();
        readStatus = true;
        return subject->getDistance();
    }
}
ProxyAstronomicOperation::~ProxyAstronomicOperation(){}