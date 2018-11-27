#include "Flowers.h"
#include <iostream>




void Flowers::getState() {
    if (_waterAmount < 5){
        std::cout<<"The "<<_name<<" needs water."<<std::endl;
    }else{
        std::cout<<"The "<<_name<<" doesn't need water."<<std::endl;
    }
}

Flowers::Flowers(std::string name, float waterAmount) : Garden(name, waterAmount) {

}

bool Flowers::needsWater() {
    return _waterAmount < 5 ;
}

void Flowers::watering(float water) {
    _waterAmount += 0.75 * water;
}

