#ifndef __PASSENGER_HATCHBACK_CAR_FACTORY__
#define __PASSENGER_HATCHBACK_CAR_FACTORY__

#include "CarFactory.cpp"
#include "Car.cpp"
#include "HatchBackChasis.cpp"
#include "PetrolEngine.cpp"
#include "TubelessWheel.cpp"


class PasssengerHatchBackCarFactory : CarFactory{
    public:
    void addWheels(Car * car)override{
        car->setWheels((Wheels *) (new TubelessWheels()));
    }
    void addEngine(Car * car)override{
        car->setEngine((Engine *)(new PetrolEngine()));
    }
    void addChasis(Car * car , std::string colour)override{
        car->setChasis((Chasis *)(new HatchBackChasis(colour)));
    }
};
#endif
