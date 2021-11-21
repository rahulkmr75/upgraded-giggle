#ifndef __ENGINE__
#define __ENGINE__

#include <string>

class Engine{
    protected:
    enum EngineType{PETROL_ENGINE , DIESEL_ENGINE , ELECTRIC_ENGINE};

    EngineType engineType;

    Engine(EngineType engineType):
    engineType(engineType)
    {}
    public:
    
    virtual void displayProperty() = 0;


};
#endif
