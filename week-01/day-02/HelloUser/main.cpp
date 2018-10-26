#include <iostream>

int main(int argc, char* args[]) {

    std::string name;
    std::cout << "What's your name?" << std::endl;
    std::cin >> name;


    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user
    std::cout << "Hello " << name << "!" << std::endl;

    return 0;
}