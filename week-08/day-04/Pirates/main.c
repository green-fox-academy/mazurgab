#include <stdio.h>
#include <string.h>

/*
Create a struct that represents a pirate
It should store:
 - name
 - an int value which tells us if he/she has a wooden leg?
 - gold count
Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates
Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate
Create a function that takes an array of pirates (and it's length) then returns the name of the
richest that has wooden leg
*/

typedef struct pirate {
    char name[256];
    int has_wooden_leg;
    short int gold_count;
}pirate_t;

int sum_of_gold(pirate_t pirates[], int size);

double average_of_gold(pirate_t pirates[], int size);

char* richest_pirate_with_wooden_leg(pirate_t pirates[], int size);

int main()
{
    pirate_t pirates[3];
    pirate_t pirate1;
    strcpy(pirate1.name, "JackTheDeaf");
    pirate1.has_wooden_leg = 1;
    pirate1.gold_count = 48;
    pirates[0] = pirate1;

    pirate_t pirate2;
    strcpy(pirate2.name, "OneEyeBob");
    pirate2.has_wooden_leg = 0;
    pirate2.gold_count = 24;
    pirates[1] = pirate2;

    pirate_t pirate3;
    strcpy(pirate3.name, "NoThumbLittleBoy");
    pirate3.has_wooden_leg = 1;
    pirate3.gold_count = 36;
    pirates[2] = pirate3;

    sum_of_gold(pirates, 3);
    average_of_gold(pirates, 3);
    richest_pirate_with_wooden_leg(pirates, 3);

    return 0;
}

int sum_of_gold(pirate_t pirates[], int size){
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += pirates[i].gold_count;
    }
    printf("The sum of all pirate's gold is: %d\n", sum);
    return sum;
}

double average_of_gold(pirate_t pirates[], int size){
    double average = sum_of_gold(pirates, size) / size;
    printf("The average of gold among the pirates: %lf\n", average);
    return average;
}

char* richest_pirate_with_wooden_leg(pirate_t pirates[], int size){
    int richest = 0;
    int index;
    for (int i = 0; i < size; ++i) {
        if(pirates[i].has_wooden_leg == 1 && pirates[i].gold_count > richest){
            richest = pirates[i].gold_count;
            index = i;
        }
    }
    printf("The richest pirate with wooden leg is: %s", pirates[index].name);
    return pirates[index].name;
}