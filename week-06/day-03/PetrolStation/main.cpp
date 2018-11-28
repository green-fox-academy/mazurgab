#include <iostream>

#include "Station.h"
#include "Car.h"

int main(){

    Station station(5000);

    Car car1(5, 50);
    Car car2 (10, 70);
    Car car3 (8, 65);
    Car car4 (12, 75);
    Car car5 (20, 100);

    station.fill(car3);
    car3.getStateCar();
    station.getStateStation();
}