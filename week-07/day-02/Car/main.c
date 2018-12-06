#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

const char* get_car_type(car_type)
{
    switch (car_type)
    {
        case VOLVO: return "Volvo";
        case TOYOTA: return "Toyota";
        case LAND_ROVER: return "Land-Rover";
        case TESLA: return "Tesla";
    }
}

typedef struct car {
	enum car_type type;
	double km;
	double gas;
}car_t;

car_t car1;


void print_stats(car_t car);

int main()
{

	return 0;
}

void print_stats(car_t car){
    if(car.type == TESLA){
        printf("The car's type is: %c, km is: %lf", car.type, car.km);
    }else{
        printf("The car's type is: %c, km is: %lf, gas: %lf", get_car_type(car1.type), car.km, car.gas);
    }
}