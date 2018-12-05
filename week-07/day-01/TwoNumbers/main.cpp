#include<stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the reminder of 22 divided by 13

    // Store the results in variables and use them when you display the result

    int a = 22;
    int b = 13;

    int add = a + b;
    printf("22 + 13 = %d\n", add);

    int substract = a - b;
    printf("22 - 13 = %d\n", substract);

    int multiple = a * b;
    printf("22 * 13 = %d\n", multiple);

    float divide = (float)a / b;
    printf("22 / 13 = %.2f\n", divide);

    int reminder = a % b;
    printf("22 / 13, reminder: %d", reminder);


    return 0;
}