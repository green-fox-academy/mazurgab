#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H

#include <iostream>
#include "Car.h"

class Station {
public:


    Station(int gasAmountStation);

    void fill (std::string car, int capacity, int gasAmountCar, int gasAmountStation);
    int getGasAmountStation() const;

private:
    int _gasAmountStation;

};


#endif //PETROLSTATION_STATION_H
