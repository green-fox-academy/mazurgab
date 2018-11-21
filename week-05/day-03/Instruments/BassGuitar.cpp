#include "BassGuitar.h"
#include <iostream>

BassGuitar::BassGuitar() : StringedInstrument("Bass Guitar", 4) {
    _name = "Bass Guitar";
}

BassGuitar::BassGuitar(int numberOfStrings): StringedInstrument("Bass Guitar", numberOfStrings) {
    _name = "Bass Guitar";
}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}

void BassGuitar::play() {
    std::cout<<_name<<", a "<<_numberOfString<<"-stringed instrument that goes "<<BassGuitar::sound()<<std::endl;
}
