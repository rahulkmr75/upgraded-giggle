#ifndef __I_OBSERVER__
#define __I_OBSERVER__

class IObserver{
    public:
    ~IObserver(){}
    virtual void update() = 0;
    virtual void display() = 0;
};
#endif