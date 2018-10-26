#include <iostream>

int main(int argc, char* args[]) {

    int num;
    std::cout << "Please give a number" << std::endl;
    std::cin >> num;

    if (num % 2 == 0){
        std::cout << "The given number is even" << std::endl;
    }else{
        std::cout << "The given number is odd" << std::endl;
    }

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    return 0;
}