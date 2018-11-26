#ifndef GARDENAPP_GARDEN_H
#define GARDENAPP_GARDEN_H

#include <iostream>
#include <vector>


class Garden {
public:

    Garden(std::string name, int waterAmount);

    virtual void water(int Amount, std::vector<Garden> plants);
    bool needsWater();

protected:
    int _waterAmount;
    std::string _name;
};


#endif //GARDENAPP_GARDEN_H
