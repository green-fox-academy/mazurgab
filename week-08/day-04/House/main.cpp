#include <stdio.h>
#include <string.h>

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

typedef struct house{
    char address [100];
    double price;
    int rooms;
    double area;
}house_t;

int IsWorthBuying(house_t* house);
int number_of_houses_worth_buying(house_t* houses, int size);

int main()
{

    house_t house;
    strcpy(house.address, "Bp, Main street 1.");
    house.price = 40000;
    house.rooms = 4;
    house.area = 120;

    IsWorthBuying(&house);
    printf("------------------------------------------------\n");

    house_t houses[10];
    for(int i = 0; i < 10; i++){
        houses[i].price = (i+1) * 1500;
        houses[i].area = 30;
    }
    printf("%d houses are worth buying.\n", number_of_houses_worth_buying(houses, 10));


    return 0;
}

int IsWorthBuying(house_t* house){
    if(house->price < (house->area * 400)){
        printf("This house is worth buying, %lf EUR / square meters\n", house->price / house->area);
        return 1;
    }else{
        printf("Do not buy it (%lf EUR / square meters)\n", house->price / house->area);
        return 0;
    }
}

int number_of_houses_worth_buying(house_t* houses, int size){
    int counter = 0;
    for(int i = 0; i < size; i++){
        if(IsWorthBuying(&houses[i]))
            counter++;
    }
    return counter;
}