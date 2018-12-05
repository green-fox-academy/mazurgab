#include <stdio.h>
#include <stdlib.h>

int SumDigit(int n);
int Equal(int a, int b);

int main()
{
    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    int first;
    printf("Please give the first integer: \n");
    scanf("%d", &first);

    int second;
    printf("Please give the second integer: \n");
    scanf("%d", &second);

    Equal(first, second);

    return 0;
}

int SumDigit (int n){
    int m = 0;

    if (n<=9){
        return n;
    }else{
        m = n % 10;
        n /= 10;
        return m + SumDigit(n);
    }
}

int Equal(int a, int b){
    if(SumDigit(a) == SumDigit(b)){
        printf("The two numbers' digits are equal.");
        return 1;
    }else{
        printf("The two numbers' digits are not equal.");
        return 0;
    }

}