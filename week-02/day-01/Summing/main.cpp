#include <iostream>
#include <string>


int sum(int x);


int main(int argc, char* args[]) {

    int number;

    std::cout<<"Give a number"<<std::endl;
    std::cin>>number;

    int value = sum(number);

    std::cout<<"The result is: "<<value<<std::endl;



    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer



    return 0;
}

int sum(int x){

    int result = 0;

    for (int i=0; i<=x; i++){

        result += i;

    }
    return result;
}
