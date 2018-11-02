#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one

    int first;
    std::cout<<"Give the first number: "<<std::endl;
    std::cin>>first;

    int second;
    std::cout<<"Give the second number: "<<std::endl;
    std::cin>>second;

    if (first > second) {

        std::cout<<"The bigger number is: "<<first<<std::endl;
    }else if(first < second){
        std::cout<<"The bigger number is: "<<second<<std::endl;
    }else{
        std::cout<<" The given numbers are equal or not a whole number"<<std::endl;
    }

    return 0;
}