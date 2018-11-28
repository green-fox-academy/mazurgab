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

    Aircrafts(int ammo, int baseDamage, int maxAmmo, Type type, bool priority);

    void fight();
    int refill(int &reAmmo);
    std::string getType();
    std::string getStatus();
    bool isPriority();
    int getAmmo() const;
    int getMaxAmmo() const;

protected:
    int _ammo;
public:
    void setAmmo(int ammo);

protected:
    int _baseDamage;
    int _maxAmmo;
    Type _type;
    bool _priority;

};


#endif //AIRCRAFTCARRIER_AIRCRAFTS_H
