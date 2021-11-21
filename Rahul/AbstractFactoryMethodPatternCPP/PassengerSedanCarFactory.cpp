#ifndef __PASSENGER_SEDAN_CAR_FACTORY__
#define __PASSENGER_SEDAN_CAR_FACTORY__

#include "CarFactory.cpp"
#include "Car.cpp"
#include "SedanChasis.cpp"
#include "PetrolEngine.cpp"
#include "NormalWheels.cpp"


class PasssengerSedanCarFactory : CarFactory{
    public:
    void addWheels(Car * car)override{
        car->setWheels((Wheels *) (new NormalWheels()));
    }
    void addEngine(Car * car)override{
        car->setEngine((Engine *)(new PetrolEngine()));
    }
    void addChasis(Car * car , std::string colour)override{
        car->setChasis((Chasis *)(new SedanChasis(colour)));
    }
};
#endif
