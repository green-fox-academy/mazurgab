#ifndef DEVICES_PRINTER2D_H
#define DEVICES_PRINTER2D_H

#include "Printer.h"

class Printer2D : public Printer {
public:
    Printer2D(int sizeX, int sizeY);
    std::string getSize() override;

protected:
    int _sizeX;
public:
    int getSizeX() const;

    int getSizeY() const;

protected:
    int _sizeY;
};


#endif //DEVICES_PRINTER2D_H
