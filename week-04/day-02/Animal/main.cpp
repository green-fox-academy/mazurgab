#include <iostream>
#include <vector>
#include "Animal.h"

int main() {

    Animal lion;
    lion.eat();
    lion.drink();
    lion.play();

    std::cout<<"Hungry: "<<lion.getHungry()<<", Thirsty: "<<lion.getThirsty()<<std::endl;


    return 0;
}