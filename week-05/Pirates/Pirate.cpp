#include "Pirate.h"

Pirate::Pirate(const std::string &name, bool hasWoodenLeg, int gold) : _name(name), _hasWoodenLeg(hasWoodenLeg),
                                                                       _gold(gold) {}

const std::string &Pirate::getName() const {
    return _name;
}

bool Pirate::isHasWoodenLeg() const {
    return _hasWoodenLeg;
}

int Pirate::getGold() const {
    return _gold;
}

