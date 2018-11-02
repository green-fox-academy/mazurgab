#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    int number;
    std::cout<<"Give an number: "<<std::endl;
    std::cin>>number;

    for (int i=0; i<= number; i++){
        for (int j=0; j<(number*2); j++){
            if (j<=number-i || j>=number+i){
                std::cout<<" ";
            }else{
                std::cout<<"*";
            }

        }

    std::cout<<std::endl;

    }

    return 0;
}