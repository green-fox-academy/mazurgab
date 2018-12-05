#ifndef CARS_CARS_H
#define CARS_CARS_H

#include <iostream>

class Cars {
public:
    Cars(int maxSpeed, const std::string &color, int weight);

private:
    int _maxSpeed;
    std::string _color;
    int _weight;

};


#endif //CARS_CARS_H
