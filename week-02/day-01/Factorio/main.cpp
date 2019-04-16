#include <iostream>
#include <string>

int factorio (int x);

int main(int argc, char* args[]) {

    int number;

    std::cout<<"Give a number: "<<std::endl;
    std::cin>>number;

    std::cout<<"The factorial is: "<<factorio(number)<<std::endl;

    // - Create a function called `factorio`
    //   that returns it's input's factorial

    return 0;
}

int factorio(int x){

    int result = 1;

    for(int i = 1; i <= x; i++){

        result *= i;

    }
    return result;
}