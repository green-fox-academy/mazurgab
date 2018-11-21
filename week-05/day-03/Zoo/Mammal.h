#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H

#include "Animal.h"

class Mammal : public Animal{
public:
    Mammal(const std::string &name);
    std::string getName() override;
    std::string breed() override;

};


#endif //ZOO_MAMMAL_H
