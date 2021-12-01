#include "AbstractOperation.hpp"
#include "ProxyAstronomicOperation.hpp"
#include <iostream>

int main(){
    AbstractOperationPtr proxy = AbstractOperationPtr( (AbstractOperation *)
        new ProxyAstronomicOperation() );
    proxy->compute();
    int c = proxy->getCount();
    std::cout<<"Stars observed : "<<c<<std::endl;
    std::cout<<"Distance ";
    std::vector<double> distance = proxy->getDistance();
    for(int i = 0 ; i < distance.size() ; i++){
        std::cout<<distance[i]<<" ";
    }
    std::cout<<std::endl;
    proxy->compute();
    c = proxy->getCount();
    std::cout<<"Stars observed : "<<c<<std::endl;
    distance = proxy->getDistance();
    for(int i = 0 ; i < distance.size() ; i++){
        std::cout<<distance[i]<<" ";
    }

    return 0;
}