#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was

    int number;
    std::cout<<"Give a number: "<<std::endl;
    std::cin>>number;

    for (int i=1; i<number + 1; i++){

        for (int j=0; j<i; j++){
            std::cout<<"*";

        }
        std::cout<<std::endl;
    }

    return 0;
}