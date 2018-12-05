#ifndef GARDENAPP_TREES_H
#define GARDENAPP_TREES_H

#include "Garden.h"

class Trees : public Garden{
public:
    Trees(std::string name, float waterAmount);
    void getState() override;
    bool needsWater() override;
    void watering(float water) override;
};


#endif
