#include "Circle.h"

double circle_area(int rad){
    double area = rad * rad * PI;
    printf("The circle's area is: %lf\n", area);
    return area;
}

double circle_circumference(int rad){
    double circumference = 2 * rad * PI;
    printf("The circle's circumference is: %lf\n", circumference);
    return circumference;
}