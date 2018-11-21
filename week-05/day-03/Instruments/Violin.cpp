#include "Violin.h"
#include <iostream>

Violin::Violin() : StringedInstrument("Violin", 4) {
    _name = "Violin";
}

Violin::Violin(int numberOfStrings): StringedInstrument("Violin", numberOfStrings) {
    _name = "Violin";
}

std::string Violin::sound(){
    return "Screech";
}

void Violin::play(){
    std::cout<<_name<<", a "<<_numberOfString<<"-stringed instrument that goes "<<Violin::sound()<<std::endl;
}
