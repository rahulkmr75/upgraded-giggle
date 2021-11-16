#ifndef __FIXED_OBSERVER__
#define __FIXED_OBSERVER__

#include "IObserver.cpp"
#include "IObservable.cpp"
#include <stdio.h>

class FixedObserver : IObserver{
    private:
    IObservable* observable;
    double temprature, pressure, humidity;

    public:
    FixedObserver(IObservable* observable) :observable(observable){
        observable->registerObserver(this);
    }
    void update()override{
        this->temprature = this->observable->getTemprature();
        this->pressure = this->observable->getPressure();
        this->humidity = this->observable->getHumidity();
        this->display();
    }
    void display()override{
        printf("Fixed Dispaly\n\
        Temp : %f, Pressure : %f, Humidity : %f \n" ,
        this->temprature, this->pressure , this->humidity);
    }
    ~FixedObserver(){
        observable->removeObserver(this);
    }
};

#endif