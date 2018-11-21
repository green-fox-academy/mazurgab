#include <iostream>
#include <fstream>

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    try{
        int num;

        std::cout<<"Give me a number as a dividant: "<<std::endl;
        std::cin>>num;

        if (num == 0) {
            throw std::string ("Can't divide by 0");
        }

        int divide = 10 / num;
        std::cout << divide << std::endl;
    }

        catch (std::string &e) {
        std::cout << "FAIL" << std::endl;
    }

    return 0;
}
