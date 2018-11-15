#include <iostream>

#include "diceSet.h"

int main(int argc, char* args[])
{
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6

    DiceSet diceSet;
    diceSet.roll();

    /*for (int i=0; i<6; ++i){                    - nem jó
        if (diceSet.getCurrent(i) !=6){
            diceSet.roll(i);
        }else if (diceSet.getCurrent(i) == 6){
            std::cout<<"The " << i + 1 << "(th) dice is 6." << std::endl;
        }
    }*/



    int i=0;

    while (diceSet.getCurrent(i) != 6 || i < 6) {
        if (diceSet.getCurrent(i) == 6) {
            std::cout << "The " << i + 1 << "(th) dice is 6." << std::endl;
            i++;
        }
        diceSet.roll(i);
    }

    /*int i = 0;                                   - Márktól

    while (diceSet.getCurrent(i) != 6 || i < 6)  {

        if (diceSet.getCurrent(i) == 6) {
            std::cout << i+1 << ". Dice: " << diceSet.getCurrent(i) << std::endl;
            i++;
        }
        diceSet.roll(i);
    }*/



    return 0;
}