#include "Mammal.h"

Mammal::Mammal(const std::string &name) : Animal(name) {}

std::string Mammal::getName() {
    return _name;
}

std::string Mammal::breed() {
    return "an egg";
}
