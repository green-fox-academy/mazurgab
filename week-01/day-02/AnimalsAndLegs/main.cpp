#include <iostream>

int main(int argc, char* args[]) {

    int chicken;
    int pigs;

    std::cout << "How many chicken do you have?" << std::endl;
    std::cin >> chicken;

    std::cout << "How many pigs do you have?" << std::endl;
    std::cin >> pigs;

    if (chicken<0 || pigs<0) {
        std::cout << "You should give the (positive) number of animals"<<std::endl;
    } else {

        int legs = (chicken * 2) + (pigs * 4) ;

        std::cout << "All your animals have " << legs << " legs" << std::endl;
    }

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    return 0;
}