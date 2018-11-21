#include "ElectricGuitar.h"


ElectricGuitar::ElectricGuitar(int numberOfString) : StringedInstrument(numberOfString) {
    _numberOfString = 6;
}

std::string ElectricGuitar::sound() {
    return "Twang";
}
