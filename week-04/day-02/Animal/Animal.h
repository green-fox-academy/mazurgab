#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <iostream>

class Animal {
public:
    Animal();
    int getHungry();
    int getThirsty();

    void eat();
    void drink();
    void play();


private:
    int _hunger;
    int _thirst;


};

#endif //ANIMAL_ANIMAL_H
