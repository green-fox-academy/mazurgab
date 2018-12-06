#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926535

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

double circle_area(int rad);

int main()
{
    circle_area(2);
    return 0;
}

double circle_area(int rad){
    double area = rad * rad * PI;
    printf("The circle's area is: %lf", area);
    return area;
}