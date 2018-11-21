#include "Reptile.h"

Reptile::Reptile(const std::string &name) : Animal(name) {}

std::string Reptile::getName() {
    return _name;
}

std::string Reptile::breed() {
    return "an egg";
}
