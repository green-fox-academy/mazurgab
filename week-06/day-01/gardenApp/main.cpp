#include <iostream>
#include <vector>
#include "Flowers.h"
#include "Trees.h"
#include "Garden.h"

int main(){

    std::vector<Garden*> plants;

    Flowers yellowFlower ("Yellow flower", 0);
    Flowers blueFlower ("Blue flower", 0);
    Trees purpleTree ("Purple Tree", 0);
    Trees orangeTree ("Orange Tree", 0);

    Garden gard;
    gard.addPlant(&yellowFlower);
    gard.addPlant(&blueFlower);
    gard.addPlant(&purpleTree);
    gard.addPlant(&orangeTree);

    gard.PrintGarden();
    std::cout<<std::endl;
    gard.distributeWater(40);
    gard.PrintGarden();
    std::cout<<std::endl;
    gard.distributeWater(70);
    gard.PrintGarden();

    return 0;
}

