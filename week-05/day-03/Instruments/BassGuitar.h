#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H

#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument{
public:
    BassGuitar();
    BassGuitar(int numberOfString);
    std::string sound() override;
    void play() override;

protected:
    std::string _name;
};


#endif //INSTRUMENTS_BASSGUITAR_H
