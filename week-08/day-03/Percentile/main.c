#include <stdio.h>
#include <stdlib.h>

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

void percentile(int* matrix, int size, int per);
void swap(int *xp, int *yp);
void bubbleSort(int* matrix, int n);

int main()
{
    unsigned int x = 0;
    unsigned int y = 0;
    printf("Give the x and y dimensions of the matrix(0+): ");
    scanf("%d %d", &x, &y);

    size_t size = x * y;

    int* matrix = calloc(size, sizeof(int));

    printf("Give the elements(%d): ", size);
    for (int i = 0; i <size ; ++i) {
        scanf("%d", &matrix[i]);
    }

    printf("\n");

    int per = 0;
    printf("Give the value of percentile: ");
    scanf("%d", &per);

    printf("-------------------------------------------------\n");

    percentile(matrix, size, per);

    free(matrix);

    return 0;
}

void percentile(int* matrix, int size, int per){

    bubbleSort(matrix, size);

    for (int i = 0; i <size ; ++i) {
        printf("matrix[%d]: %d ,\n", i, matrix[i]);
    }

    int z = size * ((float)per/100);

    printf("-------------------------------------------------\n");

    printf("The %d (%d th.) percentile element is: %d\n", per, z, matrix[z-1]);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int* matrix, int n)
{
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (matrix[j] > matrix[j+1]){
                swap(&matrix[j], &matrix[j+1]);
            }
        }
    }
}