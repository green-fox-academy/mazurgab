#include <stdio.h>
#include <stdlib.h>

int OddOrEven(int number);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    int number;
    printf("Please give an integer: \n");
    scanf("%d", &number);

    OddOrEven(number);

    return 0;
}

int OddOrEven(int number){
    if(number % 2 == 0){
        printf("The number is even");
        return 1;
    }else{
        printf("The number is odd");
        return 0;
    }
}