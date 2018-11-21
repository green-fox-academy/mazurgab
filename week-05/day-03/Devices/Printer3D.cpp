#include "Printer3D.h"

Printer3D::Printer3D(int sizeX, int sizeY, int sizeZ) : _sizeX(sizeX), _sizeY(sizeY), _sizeZ(sizeZ) {}

std::string Printer3D::getSize() {
    return getSizeX() + "X" + getSizeY() + "X" + getSizeZ();
}

int Printer3D::getSizeX() const {
    return _sizeX;
}

int Printer3D::getSizeY() const {
    return _sizeY;
}

int Printer3D::getSizeZ() const {
    return _sizeZ;
}
