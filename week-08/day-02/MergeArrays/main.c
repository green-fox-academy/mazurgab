#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{

    int* odd = NULL;
    odd = malloc(10 * sizeof(int));

    printf("odd: \n");

    for (int i = 0; i < 10; ++i) {
        odd[i] = 1 + i*2;
        printf("%d ,", odd[i]);
    }

    printf("\n");
    printf("even: \n");

    int* even = NULL;
    even = malloc(10 * sizeof(int));

    for (int i = 0; i < 10; ++i) {
        even[i] = 2 + i*2;
        printf("%d ,", even[i]);
    }

    printf("\n");
    printf("reallocated odd: \n");

    odd = (int *) realloc(odd, sizeof(int) * 20);
    for (int j = 0; j < 10; ++j) {
        odd[j+10] = even[j];
    }

    for (int k = 0; k < 20 ; ++k) {
        printf("%d ,", odd[19 - k]);
    }

    free(odd);
    free(even);

    return 0;
}