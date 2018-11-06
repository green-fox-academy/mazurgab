#include <iostream>

void giveLength(int *length);
void giveElement(int array[], int *length);
void findMax (int array[], int *length);


int main()
{
    // Refactor time!
    // use your 'refactor_maximum.cpp', solve the same exercise by creating a separate function
    // for each functionality

    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int length;
    giveLength(&length);
    int array[length];
    giveElement(array, &length);
    findMax(array, &length);

    return 0;
}

void giveLength(int *length){
    std::cout<<"Give the array's length: "<<std::endl;
    std::cin>>*length;
}

void giveElement(int array[], int *length){

    for (int i=0; i<*length; ++i){
        std::cout<<"Give the array's No.:"<<i+1<<" element: "<<std::endl;
        std::cin>>array[i];
    }

}

void findMax (int array[], int *length){
    int max = array[0];

    for (int j=0; j<*length; ++j) {
        if (array[j] > max) {
            max = array[j];
        }
    }
    int* ptr = &max;
    std::cout<<"The max element is: "<<max<<", found at: "<<ptr<<std::endl;

}