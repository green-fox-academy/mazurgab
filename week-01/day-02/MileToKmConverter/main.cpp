#include <iostream>

int main(int argc, char* args[]) {

    int km;
    std::cout << "What is the distance in km?" << std::endl;
    std::cin >> km;

    float mile = km * 0.621371192;
    std::cout << "The distance in mile is " << mile << std::endl;


    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it

    return 0;
}