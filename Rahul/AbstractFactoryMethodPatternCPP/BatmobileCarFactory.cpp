#ifndef __BATMOBILE_CAR_FACTORY__
#define __BATMOBILE_CAR_FACTORY__

#include "CarFactory.cpp"
#include "Car.cpp"
#include "BatMobileChasis.cpp"
#include "ElectricEngine.cpp"
#include "RacingWheels.cpp"


class BatMobileCarFactory : CarFactory{
    public:
    void addWheels(Car * car)override{
        car->setWheels((Wheels *) (new RacingWheels()));
    }
    void addEngine(Car * car)override{
        car->setEngine((Engine *)(new ElectricEngine()));
    }
    void addChasis(Car * car , std::string colour)override{
        car->setChasis((Chasis *)(new BatMobileChasis(colour)));
    }
};
#endif
