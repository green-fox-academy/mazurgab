#ifndef CARPARK_CARPARK_H
#define CARPARK_CARPARK_H

#include "Car.h"
#include <vector>
#include <map>

class Carpark {
public:
    void addCar(Car car);
    bool modifyTicket(int id, bool validity);
    void removeCar(int id);
    std::string getOldest();
    std::vector<Car> getPenalties();
    std::map<int, int> getPenaltiesByYear();

private:
    std::vector<Car> _cars;
public:
    const std::vector<Car> &getCars() const;
};


#endif //CARPARK_CARPARK_H
