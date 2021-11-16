#ifndef __IFLY_BEHAVIOUR__
#define __IFLY_BEHAVIOUR__
class IFlyBehaviour{
    public:
    ~IFlyBehaviour(){}
    virtual void fly()=0;
};
#endif