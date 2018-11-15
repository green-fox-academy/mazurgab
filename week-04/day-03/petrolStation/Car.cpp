#include "Car.h"
#include <iostream>

Car::Car(int gasAmountCar, int capacity) : _gasAmountCar(gasAmountCar), _capacity(capacity) {}

bool isFull(int gasAmountCar, int capacity){
    if (capacity == gasAmountCar){
        std::cout<<"The car is full of gas"<<std::endl;
        return true;
    }else{
        return false;
    }
}




