#include <stdio.h>
#include <string.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

const char* get_car_type(type)
{
    switch (type)
    {
        case VOLVO: return "Volvo";
        case TOYOTA: return "Toyota";
        case LAND_ROVER: return "Land-Rover";
        case TESLA: return "Tesla";
    }
    return "undefined";
}

typedef struct car {
	enum car_type type;
	int km;
	int gas;
}car_t;

void print_stats(car_t car);

int main()
{
    car_t car1;
    car1.type = VOLVO;
    car1.km = 56000;
    car1.gas = 45;

    car_t car2;
    car2.type = TESLA;
    car2.km = 120000;

    print_stats(car1);
    print_stats(car2);

	return 0;
}

void print_stats(car_t car){
    if(car.type == TESLA){
        printf("The car's type is: Tesla, km is: %d\n", car.km);
    }else{
        printf("The car's type is: %s, km is: %d, gas: %d\n", get_car_type(car.type), car.km, car.gas);
    }
}