#include <iostream>
#include "Flyable.h"
#include "Vehicle.h"
#include "Helicopter.h"
#include "Bird.h"

int main() {

    Helicopter helicopter;
    helicopter.takeoff();
    helicopter.fly();
    helicopter.land();

    Bird bird;
    bird.takeoff();
    bird.fly();
    bird.land();

    return 0;
}