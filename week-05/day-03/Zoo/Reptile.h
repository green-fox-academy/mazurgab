#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H

#include "Animal.h"

class Reptile : public Animal{
public:
    Reptile(const std::string &name);
    std::string getName();
    std::string breed();
};


#endif //ZOO_REPTILE_H
