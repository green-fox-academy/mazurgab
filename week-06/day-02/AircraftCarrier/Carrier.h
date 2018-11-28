#ifndef AIRCRAFTCARRIER_CARRIER_H
#define AIRCRAFTCARRIER_CARRIER_H

#include "Aircrafts.h"
#include "F16.h"
#include <vector>

class Carrier {
public:
    Carrier(int AmmoInStock, int healthPoint);

    Carrier();

    void addAircraft(Aircrafts *aircraft);
    void fill(Aircrafts *aircraft);

protected:
    std::vector <Aircrafts*> _aircraft;
    int _aircraftCounter = 0;
    int _AmmoInStock;
    int _healthPoint;


};


#endif //AIRCRAFTCARRIER_CARRIER_H
