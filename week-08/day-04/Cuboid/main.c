#include <stdio.h>

// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

typedef struct rectangular_cuboid {
    double a;
    double b;
    double c;
}rectangular_cuboid_t;

double get_surface(rectangular_cuboid_t* cub);

double get_volume(rectangular_cuboid_t* cub);

int main()
{

    rectangular_cuboid_t cub;
    cub.a = 5;
    cub.b = 6;
    cub.c = 8;

    printf("The cuboid's surface is: %.2lf\n", get_surface(&cub));
    printf("The cuboid's volume is: %.2lf\n", get_volume(&cub));

    return 0;
}

double get_surface(rectangular_cuboid_t* cub){
    return 2*((cub->a * cub-> b) + (cub -> a * cub -> c) + (cub->b * cub->c));
}

double get_volume(rectangular_cuboid_t* cub){
    return cub->a * cub->b * cub->c;
}