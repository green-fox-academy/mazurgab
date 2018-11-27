#ifndef GARDENAPP_FLOWERS_H
#define GARDENAPP_FLOWERS_H

#include "Garden.h"


class Flowers : public Garden{
public:
    Flowers(std::string name, float waterAmount);

    void getState() override;

    bool needsWater() override;

    void watering(float water) override;

};


#endif //GARDENAPP_FLOWERS_H
