#include <iostream>

void swap (int* aptr, int* bptr);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;

    int* aptr = &a;
    int* bptr  = &b;

    swap (aptr, bptr);

    return 0;
}

void swap (int* aptr, int* bptr){
    int* c;
    c = aptr;
    aptr = bptr;
    bptr = c;

    std::cout<<*aptr<<std::endl;
    std::cout<<*bptr<<std::endl;

}