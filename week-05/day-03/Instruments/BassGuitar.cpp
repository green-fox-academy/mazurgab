#include "BassGuitar.h"
#include <iostream>

BassGuitar::BassGuitar(int numberOfString) : StringedInstrument(numberOfString) {
    _name = "Bass Guitar";
    _numberOfString = 4;
}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}

void BassGuitar::play() {
    std::cout<<_name<<", a "<<_numberOfString<<"-stringed instrument that goes "<<BassGuitar::sound()<<std::endl;
}
