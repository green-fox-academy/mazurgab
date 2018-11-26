#include <iostream>
#include <vector>
#include "Flowers.h"
#include "Trees.h"

int main(){

    std::vector<Garden*> plants;

    Garden yellowFlower ("Yellow flower", 0);
    plants.push_back(& yellowFlower);
    Garden blueFlower ("Blue flower", 0);
    plants.push_back(&blueFlower);
    Garden purpleTree ("Purple Tree", 0);
    plants.push_back(&purpleTree);
    Garden orangeTree ("Orange Tree", 0);
    plants.push_back(&orangeTree);

    return 0;
}