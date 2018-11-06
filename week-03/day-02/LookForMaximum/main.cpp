#include <iostream>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it


    int length;

    std::cout<<"Give the array's length: "<<std::endl;
    std::cin>>length;

    int array[length];

    for (int i=0; i<length; ++i){
        std::cout<<"Give the array's No.:"<<i+1<<" element: "<<std::endl;
        std::cin>>array[i];
    }
    int max = array[0];

    for (int j=1; j<length; ++j) {
        if (array[j] > max) {
            max = array[j];
        }
    }
    int* ptr = &max;
    std::cout<<"The max element is: "<<max<<", found at: "<<ptr<<std::endl;
    return 0;
}