#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5

    int first;
    int second;

    std::cout<<"Give the first number: "<<std::endl;
    std::cin>>first;

    std::cout<<"Give the second number: "<<std::endl;
    std::cin>>second;

    if (second <= first){

        std::cout<<"The second number should be bigger!"<<std::endl;

    }else{

        for (int i=first; i<second; i++){
            std::cout<<i<<std::endl;
        }

    }

    return 0;
}