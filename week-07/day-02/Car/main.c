#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

typedef struct car {
	enum car_type type;
	int km;
	int gas;
}car_t;

void print_stats(car_t* car);

int main()
{
    car_t car1;
    car1.type = VOLVO;
    car1.km = 56000;
    car1.gas = 45;

    car_t car2;
    car2.type = TESLA;
    car2.km = 120000;

    print_stats(&car1);
    print_stats(&car2);

	return 0;
}

void print_stats(car_t* car){
    switch (car->type){
        case TESLA: printf("TESLA with %.d kms\n", car->km);
            break;
        case VOLVO: printf("VOLVO with %.d kms and %.d l of gas\n", car->km, car->gas);
            break;
        case TOYOTA: printf("TOYOTA with %.d kms and %.d l of gas\n", car->km, car->gas);
            break;
        case LAND_ROVER: printf("LAND ROVER with %.d kms and %.d l of gas\n", car->km, car->gas);
            break;
    }
}