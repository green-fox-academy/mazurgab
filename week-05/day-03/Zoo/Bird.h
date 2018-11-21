#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H

#include "Animal.h"

class Bird : public Animal {
public:
    Bird(const std::string &name);
    std::string getName() override;
    std::string breed() override;


};


#endif //ZOO_BIRD_H
