#include "AstronomicOperation.hpp"
#include <chrono>
#include <thread>
#include <iostream>

void AstronomicOperation::compute(){
    std::cout<<"This may take a while.\n";
    std::cout<<"Reading image\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    std::cout<<"Reading Image completed.\n";
    std::cout<<"Computing .";
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    for(int i = 0 ; i < 10 ; i++){
        std::cout<<".";
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
    starsObserved = rand() % 10;
    for(int i = 0 ; i < starsObserved ; ++i){
        distance.push_back(rand() % 53 * 3.141);
    }
    std::cout<<std::endl;
}
int AstronomicOperation::getCount(){
    return starsObserved;
}
std::vector<double> AstronomicOperation::getDistance(){
    return distance;
}
AstronomicOperation::~AstronomicOperation(){}