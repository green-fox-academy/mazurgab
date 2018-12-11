#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int StrLength(char* string1);

int main()
{
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions

    char name[20];
    printf("What's your name?\n");
    scanf("%s", name);

    StrLength(name);

    return 0;
}

int StrLength(char* string1){
    printf("%d", strlen(string1));
    return strlen(string1);
}