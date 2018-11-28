#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H

#include <iostream>

class Car {
public:
    Car(int gasAmountCar, int capacity);
    bool isFull();
    void fill();
    int getGasAmountCar() const;
    int getCapacity() const;
    void getStateCar();

private:
    int _gasAmountCar;
    int _capacity;

};


#endif
