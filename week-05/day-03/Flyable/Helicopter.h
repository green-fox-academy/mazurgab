#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H

#include "Flyable.h"
#include "Vehicle.h"

class Helicopter : public Flyable, public Vehicle{
public:
    void land() override;
    void fly() override;
    void takeoff() override;

};


#endif //FLYABLE_HELICOPTER_H
