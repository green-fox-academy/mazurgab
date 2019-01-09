#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef enum country{
    HUN,
    ENG,
    FRA,
    SWE,
}country_t;

typedef struct competitor{
    char name[20];
    country_t country;
    int result;
}competitor_t;

/*
Foot Race.
Create a structure where you store:
    - the name of the racer,
    - the country of the racer,
    - the result where he/she finished.
Create an enum where you store country short codes (example: HUN, ENG...),
for the country codes of the racers’ origin.
Create a function which returns a random array with unique elements,
from 1 to the number of competitors.
The elements of this array will represent the result of the race.
Create a function which takes 2 parameters:
    - a pointer to the array
    - and the length of the array
and returns the name of the fasttest one.
Example:
printf(get_fastest(array, len_of_array)); // output: "Viz Elek"
Create a function which takes 3 parameters:
    - a pointer to the array,
    - the length of the array
    - and the country
and returns the number of the competitors from the given country.
Example:
printf(get_same_country(array, len_of_array, ENG)); // output: 2 (if there are two english competitors)
Store the competitors in an array in the main. For each competitors just assign
a value from the random result array.
*/

competitor_t randomize_competitors(competitor_t* competitors, int number_of_competitors);

char* get_fastest(competitor_t* competitors, int number_of_competitors);

int get_same_country(competitor_t* competitors, int number_of_competitors, country_t country);

int main() {
    srand(time(NULL));

    int number_of_competitors = 5;

    competitor_t competitors[number_of_competitors];
    strcpy(competitors[0].name, "Elek");
    competitors[0].country = HUN;

    strcpy(competitors[1].name, "Adam");
    competitors[1].country = ENG;

    strcpy(competitors[2].name, "Joachim");
    competitors[2].country = FRA;

    strcpy(competitors[3].name, "Ikea");
    competitors[3].country = SWE;

    strcpy(competitors[4].name, "Feri");
    competitors[4].country = HUN;

    /*for (int i = 0; i < number_of_competitors; ++i) {
        printf("%s", competitors[i].name);
    }*/

    randomize_competitors(competitors, number_of_competitors);
    get_fastest(competitors, number_of_competitors);
    get_same_country(competitors, number_of_competitors, HUN);

    return 0;
}

competitor_t randomize_competitors(competitor_t* competitors, int number_of_competitors){
    for (int i = 0; i < number_of_competitors; ++i) {
        int r = rand() % number_of_competitors;
        competitor_t temp;
        temp = competitors[r];
        int s = rand() % number_of_competitors;
        if(s == r){
            if(s==0){
                competitors[0] = competitors[number_of_competitors];
                competitors[number_of_competitors] = temp;
            }else{
                competitors[s] = competitors[s - 1];
                competitors[s-1] = temp;
            }
        }else{
            competitors[r] = competitors[s];
            competitors[s] = temp;
        }
    }
    return *competitors;
}

char* get_fastest(competitor_t* competitors, int number_of_competitors){
    for (int i = 0; i < number_of_competitors; ++i) {
        competitors[i].result = i+1;
        printf("name: %s, result:%d\n", competitors[i].name, competitors[i].result);
    }
    printf("-------------------------------------------\n");
    printf("The winner is: %s\n", competitors[0].name);
    return competitors[0].name;
}

int get_same_country(competitor_t* competitors, int number_of_competitors, country_t country){
    int counter = 0;
    for (int i = 0; i < number_of_competitors; ++i) {
        if(competitors[i].country == country){
            counter++;
        }
    }
    printf("Number of competitors from the given country is: %d", counter);
    return counter;
}