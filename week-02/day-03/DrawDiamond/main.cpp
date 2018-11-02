#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // diamond like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *
    //
    // The diamond should have as many lines as the number was

    int number;
    std::cout<<"Give an number: "<<std::endl;
    std::cin>>number;
    int k;

    for (int i=0; i<= number; i++){
        for (int i=0; i<= number; i++){
            }for (int j=0; j<(number*2); j++){
                if (i<=(number+1)/2){
                k=i;
                }else{
                    k=number-i+1;
                }
            if (j<=number-k || j>=number+k){
                std::cout<<" ";
            }else{
                std::cout<<"*";
            }

        }
        std::cout<<std::endl;
    }

    return 0;
}



