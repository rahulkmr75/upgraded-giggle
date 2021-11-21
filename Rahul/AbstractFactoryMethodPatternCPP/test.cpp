#include "Car.cpp"
#include "F1CarFactory.cpp"
#include "BatMobileCarFactory.cpp"
#include "PassengerHatchBackCarFactory.cpp"

int main(){
    CarFactory * f1CarFactory = (CarFactory *)(new F1CarFactory());
    Car * f1Car = f1CarFactory->makeCar(std::string("Yellow"));
    f1Car->display();

    CarFactory * bmCarFactory = (CarFactory *)(new BatMobileCarFactory());
    Car * bmCar = bmCarFactory->makeCar(std::string("Balck"));
    bmCar->display();
    return 0;
}