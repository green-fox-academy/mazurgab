#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch


    Thing milk ("Get milk");
    Thing remove ("Remove the obstacles");
    Thing stand ("Stand up");
    stand.complete();
    Thing lunch ("Eat lunch");
    lunch.complete();

    fleet.add(milk);
    fleet.add(remove);
    fleet.add(stand);
    fleet.add(lunch);

    std::cout << fleet.toString() << std::endl;
    return 0;
}