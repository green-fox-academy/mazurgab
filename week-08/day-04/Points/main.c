#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/

typedef struct point{
    double x;
    double y;
}point_t;

point_t create_point(double x, double y);

double distance(point_t p1, point_t p2);

int main()
{
    point_t p1 = create_point(1, 1);
    point_t p2 = create_point(1, 5.5);
    double dist = distance(p1, p2);
    printf("%f", dist);
	return 0;
}

point_t create_point(double x, double y){
    point_t p;
    p.x = x;
    p.y = y;
    return p;
}

double distance(point_t p1, point_t p2){
    double xdist = 0;
    double ydist = 0;

    if(p1.x >= p2.x){
        xdist = p1.x - p2.x;
    }else if(p2.x > p1.x){
        xdist = p2.x - p1.x;
    }

    if(p1.y >= p2.y){
        ydist = p1.y - p2.y;
    }else if(p2.y > p1.y){
        ydist = p2.y - p1.y;
    }

    return sqrt((xdist * xdist) + (ydist * ydist));
}