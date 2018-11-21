#ifndef FLYABLE_BIRD_H
#define FLYABLE_BIRD_H

#include "Flyable.h"
#include "Vehicle.h"

class Bird : public Flyable, public Vehicle{
public:
    void land() override;
    void fly() override;
    void takeoff() override;
};


#endif //FLYABLE_BIRD_H
