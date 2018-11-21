#include "ElectricGuitar.h"
#include <iostream>


ElectricGuitar::ElectricGuitar() : StringedInstrument("Electric Guitar", 6) {
    _name = "Electric Guitar";
}

ElectricGuitar::ElectricGuitar(int numberOfStrings): StringedInstrument("Electric Guitar", numberOfStrings) {
    _name = "Electric Guitar";
}

std::string ElectricGuitar::sound() {
    return "Twang";
}

void ElectricGuitar::play() {
    std::cout<<_name<<", a "<<_numberOfString<<"-stringed instrument that goes "<<ElectricGuitar::sound()<<std::endl;
}

