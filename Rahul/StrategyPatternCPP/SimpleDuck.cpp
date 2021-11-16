#include "Duck.cpp"
#include "SimpleFly.cpp"
#include "SimpleQuack.cpp"

class SimpleDuck : Duck{
public:
SimpleDuck(): Duck(
    (IFlyBehaviour *)(new SimpleFly()) ,
    (IQuackBehaviour *)(new SimpleQuack())
    ){
}
};