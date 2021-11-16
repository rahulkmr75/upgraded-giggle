#ifndef __TV_OBSERVER__
#define __TV_OBSERVER__

#include "IObserver.cpp"
#include "IObservable.cpp"
#include <stdio.h>

class TvObserver : IObserver{
    private:
    IObservable* observable;
    double temprature, pressure, humidity;

    public:
    TvObserver(IObservable* observable) :observable(observable){
        observable->registerObserver(this);
    }
    void update()override{
        this->temprature = this->observable->getTemprature();
        this->pressure = this->observable->getPressure();
        this->humidity = this->observable->getHumidity();
        this->display();

    }
    void display()override{
        printf("TV Dispaly\n\
        Temp : %f, Pressure : %f, Humidity : %f \n" ,
        this->temprature, this->pressure , this->humidity);
    }
    ~TvObserver(){
        observable->removeObserver(this);
    }
};

#endif