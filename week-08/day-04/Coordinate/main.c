#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Create a struct to store coordinates (for example: int x and int y)
// Create an array which can store coordinates, do not create multidimensonal arrays here
// Fill up the coordinates in the array with random number.

typedef struct coordinates{
    int x;
    int y;
}coordinates_t;

int main()
{
    srand(time(NULL));
    coordinates_t array[10];
    for(int i = 0; i < 10; i++){
        array[i].x = 1+ rand() % 100;
        array[i].y = 1+ rand() % 100;
        printf("%d: x: %d, y: %d\n", i, array[i].x, array[i].y);
    }

	return 0;
}