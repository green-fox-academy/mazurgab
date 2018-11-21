#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"

class StringedInstrument : public Instrument {
public:
    StringedInstrument(std::string name, int numberOfStrings);

    virtual std::string sound() = 0;
    virtual void play() = 0;

protected:
    int _numberOfString;
};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
