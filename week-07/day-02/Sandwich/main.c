#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

typedef struct sandwich{
    char *name;
    float price;
    float weight;
}sandwich_t;

float total_price(sandwich_t* sandwich1, float piece);

int main()
{
    sandwich_t sandwich1;
    strcpy(sandwich1.name, "Big_Mac");
    sandwich1.price = 1200;
    sandwich1.weight = 500;

    total_price(&sandwich1, 5);

    return 0;
}

float total_price(sandwich_t* sandwich1, float piece){
    float price = sandwich1->price * piece;
    printf("The total price is: %f", price);
    return price;
}