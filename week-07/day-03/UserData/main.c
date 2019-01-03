#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// create a program which asks for full name and age
// and stores it in a char array
// parse that array to first_name, last_name, age (use tokenizing)
// print out the the stored variables
// example:
//   printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

int main ()
{
    char array[] = {"Mazur Gabor 33"};


    char *pch = strtok(array, " ");
    int counter = 0;
    char first_name[20];
    char last_name[20];
    int age = 0;
    char *ptr;

    while (pch != NULL) {
        switch (counter) {

            case 0  :
                strcpy(first_name, pch);
                break;

            case 1  :
                strcpy(last_name, pch);
                break;
            case 2  :
                age = strtol(pch, &ptr, 10);
                break;

            default : /* Optional */
                printf("Something went wrong");
        }
        pch = strtok(NULL, " ");
        counter++;
    }

    printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);
    return 0;
}