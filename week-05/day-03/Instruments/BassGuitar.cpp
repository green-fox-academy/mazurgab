#include "BassGuitar.h"

BassGuitar::BassGuitar(int numberOfString) : StringedInstrument(numberOfString) {
    _numberOfString = 4;
}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}
