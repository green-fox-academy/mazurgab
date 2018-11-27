#ifndef AIRCRAFTCARRIER_AIRCRAFTS_H
#define AIRCRAFTCARRIER_AIRCRAFTS_H

#include <iostream>

enum class Type{
    F16,
    F35
};

class Aircrafts {
public:
    Aircrafts();
    void fight();
    void refill(int &reAmmo);
    std::string getType();
    std::string getStatus();
    bool isPriority();

protected:
    int _ammo;
    int _baseDamage;
    int _maxAmmo;
    Type _type;
    bool _priority;

};


#endif //AIRCRAFTCARRIER_AIRCRAFTS_H
