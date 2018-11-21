#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument{
public:
    ElectricGuitar(int numberOfString);
    std::string sound() override;
public:


};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
