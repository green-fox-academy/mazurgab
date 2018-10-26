#include <iostream>

int main(int argc, char* args[]) {

    int a;
    int b;
    int c;

    std::cout << "Give the cuboid a side's length" << std::endl;
    std::cin >> a;

    std::cout << "Give the cuboid b side's length" << std::endl;
    std::cin >> b;

    std::cout << "Give the cuboid c side's length" << std::endl;
    std::cin >> c;

    int surface = (2 * a * b) + (2 * a * c) + (2 * b * c);
    int volume = a * b * c;

    std::cout << "Surface Area: " << surface << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    return 0;
}