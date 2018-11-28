#include <iostream>
#include "F16.h"
#include "F35.h"
#include "Aircrafts.h"
#include "Carrier.h"

int main(){

    F16 falcon;
    F35 thunder;
    F16 eagle;
    F35 lightning;
    F35 phantom;

    Carrier independence;
    independence.addAircraft(&falcon);
    independence.addAircraft(&thunder);
    independence.addAircraft(&eagle);
    independence.addAircraft(&lightning);
    independence.addAircraft(&phantom);

    Carrier intruder;
    intruder.addAircraft(&lightning);
    intruder.addAircraft(&phantom);

    return 0;
}