#include "Station.h"


Station::Station(int gasAmountStation) : _gasAmountStation(gasAmountStation) {}

int Station::getGasAmountStation() const {
    return _gasAmountStation;
}


void fill(std::string car, int capacity, int gasAmountCar, int gasAmountStation){
    for (int i=0; i<= capacity - gasAmountCar; ++i){
        std::cout<<"Filling car"<<std::endl;
        gasAmountStation--;
        gasAmountCar++;

    }
    Station::getGasAmountStation();
}


