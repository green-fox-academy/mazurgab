#include <iostream>

int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    void returnIndex (int array[], int length, int param);

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int param;
    std::cout<<"Give a number please: "<<std::endl;
    std::cin>>param;

    returnIndex(array, sizeof(array)/sizeof(array[0]), param);

    return 0;
}

int returnIndex (int array[], int length, int param){

    for(int i=0; i<length; ++i){
        if(param == array[i]){
            std::cout<<"The parameter found in the array at index No.: "<< i <<std::endl;
            return i;
        }

    }
    return 0;
}