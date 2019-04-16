#include <iostream>

int main(int argc, char* args[]) {

double sides[3];
double volume = 1;

    for (int i = 0; i < 3; ++i) {
        int side;
        std::cout << "Give the cuboid "<<i+1<<". side's length" << std::endl;
        std::cin >> side;
        volume *= side;
        sides[i] = side;
    }

    std::cout << "Surface Area: " << (2*sides[0]*sides[1]) + (2*sides[0]*sides[2] + (2*sides[1]*sides[2])) << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    return 0;
}