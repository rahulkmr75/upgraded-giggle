#ifndef __MOBILE_OBSERVER__
#define __MOBILE_OBSERVER__

#include "IObserver.cpp"
#include "IObservable.cpp"
#include <stdio.h>

class MobileObserver : IObserver{
    private:
    IObservable* observable;
    double temprature, pressure, humidity;

    public:
    MobileObserver(IObservable* observable) :observable(observable){
        observable->registerObserver(this);
    }
    void update()override{
        this->temprature = this->observable->getTemprature();
        this->pressure = this->observable->getPressure();
        this->humidity = this->observable->getHumidity();
        this->display();

    }
    void display()override{
        printf("Mobile Dispaly\n\
        Temp : %f, Pressure : %f, Humidity : %f \n" ,
        this->temprature, this->pressure , this->humidity);
    }
    ~MobileObserver(){
        observable->removeObserver(this);
    }
};

#endif