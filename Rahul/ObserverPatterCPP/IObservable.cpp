#ifndef __I_OBSERVABLE__
#define __I_OBSERVABLE__
#include "IObserver.cpp"
class IObservable{
    public:
    ~IObservable(){}
    virtual void registerObserver(IObserver *observer) = 0;
    virtual void removeObserver(IObserver *observer) = 0;
    virtual void notifyObserver() = 0;

    //states
    virtual double getTemprature() = 0;
    virtual double getPressure() = 0;
    virtual double getHumidity() = 0;

};
#endif