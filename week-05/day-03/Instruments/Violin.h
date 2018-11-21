#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H

#include "StringedInstrument.h"

class Violin : public StringedInstrument {
public:
    Violin(int numberOfString);
    std::string sound() override;
    void play();

protected:
    std::string _name;
};


#endif //INSTRUMENTS_VIOLIN_H
