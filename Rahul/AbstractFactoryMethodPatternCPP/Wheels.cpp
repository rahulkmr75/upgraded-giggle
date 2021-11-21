#ifndef __WHEELS__
#define __WHEELS__

class Wheels{
    protected:
    enum WheelType{NORMAL_WHEEL , TUBELESS_WHEEL , RACING_WHEEL};

    WheelType wheelType;
    int maxSpeed;

    Wheels(WheelType wheelType , int maxSpeed):
    wheelType(wheelType),
    maxSpeed(maxSpeed)
    {}

    public:
    virtual void displayProperty() = 0;


};
#endif
