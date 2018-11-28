#include "Car.h"

Car::Car(int gasAmountCar, int capacity) : _gasAmountCar(gasAmountCar), _capacity(capacity) {}

bool Car::isFull() {
    return _capacity == _gasAmountCar;
}

void Car::fill() {
    _gasAmountCar++;
}

int Car::getGasAmountCar() const {
    return _gasAmountCar;
}

int Car::getCapacity() const {
    return _capacity;
}

void Car::getStateCar() {
    std::cout<<"The car's capacity is "<<_capacity<<", current gas amount is: "<<_gasAmountCar<<std::endl;
}
