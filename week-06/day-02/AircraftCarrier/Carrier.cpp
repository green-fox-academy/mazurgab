#include "Carrier.h"
#include "Aircrafts.h"

void Carrier::addAircraft(Aircrafts *aircraft) {
    _aircraft.push_back(aircraft);
    _aircraftCounter++;
}

void Carrier::fill(Aircrafts *aircraft) {
    if (_AmmoInStock != 0) {
        for (int i = 0; i < _aircraft.size(); ++i) {
            if (_AmmoInStock > _aircraft[i]->getMaxAmmo()) {
                _AmmoInStock -= _aircraft[i]->getMaxAmmo() - aircraft[i].getAmmo();
                _aircraft[i]->setAmmo(_aircraft[i]->getMaxAmmo());
            } else {
                std::cout << "Do not have enough ammo to refill aircraft" << std::endl;
            }
        }
    }
}

Carrier::Carrier(int AmmoInStock, int healthPoint) : _AmmoInStock(AmmoInStock), _healthPoint(healthPoint) {}

Carrier::Carrier() {}
