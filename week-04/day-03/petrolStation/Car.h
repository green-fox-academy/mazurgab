#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H


class Car {
public:
    Car(int gasAmountCar, int capacity);



    bool isFull(int gasAmountCar, int capacity);


private:
    int _gasAmountCar;
    int _capacity;
};


#endif //PETROLSTATION_CAR_H
