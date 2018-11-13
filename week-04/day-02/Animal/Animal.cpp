#include "Animal.h"

Animal::Animal(){
    _hunger = 50;
    _thirst = 50;

}

int Animal::getHungry(){
    return _hunger;
}

int Animal::getThirsty(){
    return _thirst;
}

void Animal::eat(){
    _hunger--;
}

void Animal::drink(){
    _thirst--;
}

void Animal::play(){
    _hunger++;
    _thirst++;
}