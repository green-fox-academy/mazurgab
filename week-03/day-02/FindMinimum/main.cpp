#include <iostream>

int* minVal(int array[], int length);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value


    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    minVal(numbers, 7);

    return 0;
}
int* minVal(int array[], int length){
    int min = array[0];
    for(int i=1; i<length; ++i){
        if(array[i] < min){
            min = array[i];
        }
    }

    int* ptr = &min;
    std::cout<< "The smallest element is: "<<min<<", found at: "<<ptr<<std::endl;

    return ptr;

}