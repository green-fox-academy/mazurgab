#ifndef CARPARK_CAR_H
#define CARPARK_CAR_H

#include <iostream>

class Car {
public:
    Car(int id, const std::string &licencePlate, int year, bool parkingTicket);
    int getId() const;
    void setId(int id);
    const std::string &getLicencePlate() const;
    int getYear() const;
    bool hasParkingTicket() const;

private:
    int _id;
    std::string _licencePlate;
    int _year;
    bool _parkingTicket;

};


#endif //CARPARK_CAR_H
