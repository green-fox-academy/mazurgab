#include "Violin.h"

Violin::Violin(int numberOfString) : StringedInstrument(numberOfString) {
    _numberOfString = 4;
}

std::string Violin::sound() {
    return "Screech";
}
