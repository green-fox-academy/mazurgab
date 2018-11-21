#include "ElectricGuitar.h"
#include <iostream>


ElectricGuitar::ElectricGuitar(int numberOfString) : StringedInstrument(numberOfString) {
    _name = "Electric Guitar";
    _numberOfString = 6;
}

std::string ElectricGuitar::sound() {
    return "Twang";
}

void ElectricGuitar::play() {
    std::cout<<_name<<", a "<<_numberOfString<<"-stringed instrument that goes "<<ElectricGuitar::sound()<<std::endl;
}
