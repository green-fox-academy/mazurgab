#include <stdio.h>
#include <stdlib.h>

int IsPrime(int number);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)

    int number = 0;
    printf("Please give a number:\n");
    scanf("%d", &number);

    IsPrime(number);

    return 0;
}

int IsPrime(int number){
    int counter = 0;
    for (int i = 2; i < number/2 + 1; ++i) {
        if(number % i == 0){
            counter++;
        }
    }
    if(counter == 0){
        printf("The given number is a prime number");
        return 1;
    }else{
        printf("The given number is dividable by %d numbers", counter + 2);
        return 0;
    }
}