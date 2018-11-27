#include "Garden.h"
#include <iostream>


Garden::Garden(std::string name, float waterAmount) : _name(name), _waterAmount(waterAmount) {}

Garden::Garden() {}

void Garden::getState() {
}

void Garden::addPlant(Garden *plants) {
    _plants.push_back(plants);
    if(plants->needsWater()){
        _needsWatering++;
    }
}

void Garden::distributeWater(float Amount) {
    for (int i = 0; i <_plants.size() ; ++i) {
        if(_plants[i]->needsWater())
            _plants[i]->watering(Amount/_needsWatering);
    }
    std::cout<<"Watering with "<<Amount<<std::endl;
}

void Garden::PrintGarden() {
    for (int i = 0; i <_plants.size() ; ++i) {
        _plants[i]->getState();
    }
}

bool Garden::needsWater() {
    return false;
}

void Garden::watering(float water) {

}

