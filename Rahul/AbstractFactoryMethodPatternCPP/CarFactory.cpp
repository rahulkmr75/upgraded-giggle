#ifndef __CAR_FACTORY__
#define __CAR_FACTORY__

#include "Car.cpp"

class CarFactory{
    protected:
    virtual void addWheels(Car * car) = 0;
    virtual void addEngine(Car * car) = 0;
    virtual void addChasis(Car * car , std::string colour) = 0;
    public :
    Car * makeCar(std::string colour){
        Car * car = new Car();
        this->addWheels(car);
        this->addEngine(car);
        this->addChasis(car , colour);
        return car;
    }
};
#endif
