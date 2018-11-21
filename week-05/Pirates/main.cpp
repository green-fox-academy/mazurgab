#include <iostream>
#include <string>
#include <vector>
#include "Pirate.h"

std::vector <std::string> ExpertPirates(std::vector <Pirate> pirates);

int main()
{
    std::vector <Pirate> pirates;

    // Given this vector...

    pirates.push_back(Pirate("Olaf", false, 12));
    pirates.push_back(Pirate("Uwe", true, 9));
    pirates.push_back(Pirate("Jack", true, 16));
    pirates.push_back(Pirate("Morgan", false, 17));
    pirates.push_back(Pirate("Hook", true, 20));

    // Write a function that takes any vector that contains pirates as in the example,
    // And returns a list of names containing the pirates that
    // - have wooden leg and
    // - have more than 15 gold

    ExpertPirates (pirates);

    return 0;
}

std::vector <std::string> ExpertPirates(std::vector <Pirate> pirates){

    std::vector <std::string> ExpertPiratesList;

    for (int i=0; i<pirates.size(); i++)
        if (pirates[i].isHasWoodenLeg() && pirates[i].getGold() > 15){
            ExpertPiratesList.push_back(pirates[i].getName());
        }

     for (int j=0; j<ExpertPiratesList.size(); j++){
         std::cout<<ExpertPiratesList[j]<<std::endl;
     }
}