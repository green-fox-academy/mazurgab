#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int* ptr = &a;
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;

    double* ptr2 = &b;
    std::cout<<ptr2<<std::endl;
    std::cout<<*ptr2<<std::endl;

    std::string* ptr3 = &name;
    std::cout<<ptr3<<std::endl;
    std::cout<<*ptr3<<std::endl;

    return 0;
}