#include <stdio.h>

// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000

int main() {

    double a;
    printf("Please give variable a:\n");
    scanf("%lf", &a);

    double b;
    printf("Please give variable b:\n");
    scanf("%lf", &b);

    double c;
    printf("Please give variable c:\n");
    scanf("%lf", &c);

    double Surf = 2 *((a*b)+(b*c)+(a*c));
    printf("Surface area: %.4lf\n", Surf);

    double Volume = a * b * c;
    printf("Volume: %.4lf\n", Volume);


    return 0;
}