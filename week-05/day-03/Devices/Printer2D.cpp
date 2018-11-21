#include "Printer2D.h"

Printer2D::Printer2D(int sizeX, int sizeY) : _sizeX(sizeX), _sizeY(sizeY) {}

std::string Printer2D::getSize() {
    return getSizeX() + "X" + getSizeY();
}

int Printer2D::getSizeX() const {
    return _sizeX;
}

int Printer2D::getSizeY() const {
    return _sizeY;
}
