#ifndef __F1_CAR_FACTORY__
#define __F1_CAR_FACTORY__

#include "CarFactory.cpp"
#include "Car.cpp"
#include "F1Chasis.cpp"
#include "DieselEngine.cpp"
#include "RacingWheels.cpp"


class F1CarFactory : CarFactory{
    public:
    void addWheels(Car * car)override{
        car->setWheels((Wheels *) (new RacingWheels()));
    }
    void addEngine(Car * car)override{
        car->setEngine((Engine *)(new DieselEngine()));
    }
    void addChasis(Car * car , std::string colour)override{
        car->setChasis((Chasis *)(new F1Chasis(colour)));
    }
};
#endif
