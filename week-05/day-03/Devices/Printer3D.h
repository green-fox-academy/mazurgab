#ifndef DEVICES_PRINTER3D_H
#define DEVICES_PRINTER3D_H

#include "Printer.h"

class Printer3D : public Printer {
public:
    Printer3D(int sizeX, int sizeY, int sizeZ);
    std::string getSize();

protected:
    int _sizeX;
    int _sizeY;
public:
    int getSizeX() const;

    int getSizeY() const;

    int getSizeZ() const;

protected:
    int _sizeZ;
};


#endif //DEVICES_PRINTER3D_H
