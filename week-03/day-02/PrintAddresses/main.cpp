#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int array[5];

    for (int i=0; i<5; i++){
        std::cout<<"Give a number(No.:"<<i+1<<"): "<<std::endl;
        std::cin>>array[i];
    }

    int *arrayPtr = array;
    for (int j=0; j<5; ++j){
        std::cout<<arrayPtr + j<<std::endl;

    }

    return 0;
}