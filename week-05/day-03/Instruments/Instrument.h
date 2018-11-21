#ifndef INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_INSTRUMENT_H

#include <string>

class Instrument {
public:
    Instrument(std::string &name);

    virtual void play() = 0;
    virtual std::string sound() = 0;

protected:
    std::string _name;
};


#endif //INSTRUMENTS_INSTRUMENT_H
