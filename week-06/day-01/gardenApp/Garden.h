#ifndef GARDENAPP_GARDEN_H
#define GARDENAPP_GARDEN_H

#include <iostream>
#include <vector>

enum class Type{
    FLOWER,
    TREE
};

class Garden {
public:

    Garden(std::string name, float waterAmount);

    Garden();

    virtual void getState();

    void addPlant(Garden* plants);

    virtual bool needsWater();

    void distributeWater(float Amount);

    virtual void watering(float water);

    void PrintGarden();

protected:
    float _waterAmount;
    std::string _name;
    std::vector<Garden*> _plants;
    int _needsWatering = 0;
};


#endif //GARDENAPP_GARDEN_H
