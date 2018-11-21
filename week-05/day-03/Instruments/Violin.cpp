#include "Violin.h"
#include <iostream>

Violin::Violin(int numberOfString) : StringedInstrument(numberOfString) {
    _name = "Violin";
    _numberOfString = 4;
}

std::string Violin::sound() {
    return "Screech";
}

void Violin::play() {
    std::cout<<_name<<", a "<<_numberOfString<<"-stringed instrument that goes "<<Violin::sound()<<std::endl;
}
