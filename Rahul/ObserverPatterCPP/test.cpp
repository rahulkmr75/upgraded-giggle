#include <stdio.h>
#include "WeatherStation.cpp"
#include "MobileObserver.cpp"
#include "TvObserver.cpp"
#include "FixedObserver.cpp"

int main(){
    WeatherStaion* weatherStation = new WeatherStaion();
    IObserver* mobileObserver = (IObserver * )
        (new MobileObserver((IObservable *)weatherStation));
    IObserver* fixedObserver = (IObserver * )
        (new FixedObserver((IObservable *)weatherStation));
    IObserver* fixedObserver2 = (IObserver * )
        (new FixedObserver((IObservable *)weatherStation));
    IObserver* tvObserver = (IObserver * )
        (new TvObserver((IObservable *)weatherStation));

    weatherStation->notifyObserver();
    weatherStation->setTemprature(25.6);
    weatherStation->setHumidity(89);
    weatherStation->setPressure(980);
    weatherStation->notifyObserver();
    delete fixedObserver2;
    weatherStation->setHumidity(63);
    weatherStation->notifyObserver();
    return 0;
}