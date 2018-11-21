#include "Printer.h"
#include <iostream>

void Printer::print() {
    std::cout<<"I'm printing something that's "<< getSize() <<" cm."<<std::endl;
}
