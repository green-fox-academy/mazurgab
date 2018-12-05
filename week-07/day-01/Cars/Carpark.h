#ifndef CARS_CARPARK_H
#define CARS_CARPARK_H

#include "Cars.h"
#include <vector>

class Carpark {
public:
    void addCar(Cars car);

private:
    std::vector<Cars> _cars;

};


#endif //CARS_CARPARK_H
