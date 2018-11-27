#include "Trees.h"



void Trees::getState() {
    if (_waterAmount < 10){
        std::cout<<"The "<<_name<<" needs water."<<std::endl;
    }else{
        std::cout<<"The "<<_name<<" doesn't need water."<<std::endl;
    }
}

Trees::Trees(std::string name, float waterAmount) : Garden(name, waterAmount) {

}

bool Trees::needsWater() {
    return _waterAmount < 10 ;
}

void Trees::watering(float water) {
    _waterAmount += 0.4 * water;
}
