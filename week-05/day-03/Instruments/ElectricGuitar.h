#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument{
public:
    ElectricGuitar(int numberOfString);
    std::string sound() override;
    void play();
protected:
    std::string _name;

};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
