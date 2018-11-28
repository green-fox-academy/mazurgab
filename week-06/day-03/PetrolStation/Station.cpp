#include "Station.h"

Station::Station(int gasAmount) : _gasAmount(gasAmount) {}

void Station::fill(Car &car) {
    while(!car.isFull()){
        car.fill();
        std::cout<<"Filling the car"<<std::endl;
        _gasAmount--;
    }
}

void Station::getStateStation() {
    std::cout<<"Remaining gas at this station: "<< _gasAmount <<std::endl;
}

