#include <stdio.h>

// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stored number is lower
// You found the number: 8

void guess(int number);

int main() {

    int number = 69;

    guess(number);

    return 0;
}

void guess(int number){
    int guess = 0;
    for (int i = 0; i <10 ; ++i) {
        printf("You have %d try left. Guess the number(1-100): \n", 10-i);
        scanf("%d", &guess);
        if(number<guess){
            printf("The stored number is lower\n");
        }else if(number>guess){
            printf("The stored number is higher\n");
        }else{
            printf("You found the number: %d\n", number);
            break;
        }
    }
}