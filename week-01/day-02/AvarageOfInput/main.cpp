#include <iostream>

int main() {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    int sum = 0;

    for(int i=0; i<5; i++){
        int number;
        std::cout << "Please give the "<<i+1<<". number" << std::endl;
        std::cin >> number;
        sum += number;
    }

    int avarage = sum/5;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Avarage : " << avarage << std::endl;

    return 0;
}