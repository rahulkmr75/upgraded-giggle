#ifndef __CAR__
#define __CAR__

#include "Engine.cpp"
#include "Chasis.cpp"
#include "Wheels.cpp"
class Car{
    private:
    Engine * engine;
    Chasis * chasis;
    Wheels * wheels;
    public:
    void setEngine(Engine * engine){
        this->engine = engine;
    }
    void setChasis(Chasis * chasis){
        this->chasis = chasis;
    }
    void setWheels(Wheels * wheels){
        this->wheels = wheels;
    }

    void display(){
        this->engine->displayProperty();
        this->chasis->displayProperty();
        this->wheels->displayProperty();
    }


};
#endif