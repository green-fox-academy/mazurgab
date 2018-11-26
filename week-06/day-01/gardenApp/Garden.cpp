#include "Garden.h"
#include <iostream>


Garden::Garden(std::string name, int waterAmount) : _name(name), _waterAmount(waterAmount) {}

void Garden::water(int Amount, std::vector<Garden> plants) {
    int counter;
    for (int i = 0; i < plants.size(); ++i) {
        if (plants[i].needsWater() == true) {
            counter++;
        }
    }
    for (int j=0; j<counter; j++){
        if (plants[j].needsWater() == true){
            _waterAmount += Amount/counter;
        }
    }
}


bool Garden::needsWater() {
    if (_waterAmount<5){
        return true;
    }else{
        return false;
    }
}
