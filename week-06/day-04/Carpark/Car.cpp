#include "Car.h"

Car::Car(int id, const std::string &licencePlate, int year, bool parkingTicket) : _id(id), _licencePlate(licencePlate),
                                                                                 _year(year),
                                                                                 _parkingTicket(parkingTicket) {}

int Car::getId() const {
    return _id;
}

void Car::setId(int id) {
    _id = id;
}

int Car::getYear() const {
    return _year;
}

const std::string &Car::getLicencePlate() const {
    return _licencePlate;
}

bool Car::hasParkingTicket() const {
    return _parkingTicket;
}
