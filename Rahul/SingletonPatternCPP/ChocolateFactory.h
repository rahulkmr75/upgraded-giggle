#ifndef __CHOCOLATE_FACTORY__
#define __CHOCOLATE_FACTORY__

class ChocolateFactory{
    private:
    static ChocolateFactory * singleton;
    ChocolateFactory();
    int data;

    public:
    static ChocolateFactory * getInstance();
    void setData(int);
    int getData();
};

#endif