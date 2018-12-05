#include <stdio.h>
#include <stdlib.h>

void alcoholic(int age);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int age;
    printf("How old are you?");
    scanf("%d", &age);

    alcoholic(age);

    return 0;
}

void alcoholic(int age){
    if(age >= 18){
        printf("You are good to go, buy yourself your first beer!");
    }else{
        printf("It's not gonna happen, drink fruit juice instead");
    }
}