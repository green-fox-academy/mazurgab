#include <iostream>

int main(int argc, char* args[]) {

    int first;
    std::cout << "Please give the first number" << std::endl;
    std::cin >> first;

    int second;
    std::cout << "Please give the second number" << std::endl;
    std::cin >> second;

    int third;
    std::cout << "Please give the third number" << std::endl;
    std::cin >> third;

    int fourth;
    std::cout << "Please give the fourth number" << std::endl;
    std::cin >> fourth;

    int fifth;
    std::cout << "Please give the fifth number" << std::endl;
    std::cin >> fifth;

    int sum = first + second + third + fourth + fifth;
    float avarage = sum / 5 ;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Avarage : " << avarage << std::endl;

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    return 0;
}