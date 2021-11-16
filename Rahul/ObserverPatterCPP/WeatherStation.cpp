#ifndef __WEATHER_STATION__
#define __WEATHER_STATION__
#include "IObservable.cpp"
#include <vector>
class WeatherStaion : IObservable{
private:
std::vector<IObserver *> observers;
double temprature, pressure, humidity;

public:
WeatherStaion(){
    this->temprature = 0.0;
    this-> pressure = 0.0;
    this->humidity = 0.0;
}
void registerObserver(IObserver *observer)override{
    this->observers.push_back(observer);
}
void removeObserver(IObserver *observer)override{
    for(int i = 0 ; i < observers.size() ; ++i){
        if(observers[i] == observer){
            observers.erase(observers.begin() + i);
            break;
        }
    }
}
void notifyObserver()override{
    for(auto it : this->observers){
        it->update();
    }
}
double getTemprature()override{
    return this->temprature;
}
double getPressure()override{
    return this->pressure;
}
double getHumidity()override{
    return this->humidity;
}
void setTemprature(double temprature){
    this->temprature = temprature;
}
void setPressure(double pressure){
    this->pressure = pressure;
}
void setHumidity(double humidity){
    this->humidity = humidity;
}
};

#endif