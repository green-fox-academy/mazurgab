#include "Copier.h"

Copier::Copier(int sizeX, int sizeY, int speed) : Printer2D(sizeX, sizeY), Scanner(speed) {}

void Copier::copy() {
    std::cout << scan() <<" and "<< print() << std::endl;
}
