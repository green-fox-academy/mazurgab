#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. This number will be X.
// Allocate memory for X numbers and prompt the user to enter X numbers.
// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

int main()
{
    int number = 0;
    printf("Give a size: \n");
    scanf("%d", &number);

    int* pointer;
    pointer = (int *) malloc(number * sizeof(int));

    printf("Give the numbers: \n");
    int sum = 0;
    for (int i = 0; i <number ; ++i) {
        scanf("%d", &pointer[i]);
        sum += pointer[i];
    }

    pointer = (int *) realloc(pointer, (number + 1) * sizeof(int));
    pointer[number] = sum;

    for (int j = 0; j <number+1 ; ++j) {
        printf("%d ,", pointer[j]);
    }

    free(pointer);

    return 0;
}