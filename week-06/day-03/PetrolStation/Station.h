#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H

#include "Car.h"

class Station {
public:
    Station(int gasAmount);
    void fill(Car &car);
    void getStateStation();

private:
    int _gasAmount;

};

#endif //PETROLSTATION_STATION_H
