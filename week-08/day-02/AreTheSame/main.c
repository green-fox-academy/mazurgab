#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int AreTheSame(char* string1, char* string2);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char string1[20];
    char string2[20];
    printf("Please give two strings: ");
    scanf("%s %s",string1, string2);

    AreTheSame(string1, string2);

    return 0;
}

int AreTheSame(char* string1, char* string2){
    if (0 == strcmp(string1, string2)){
    printf("These are the same");
        return 1;
    }else{
    printf("Not the same");
        return 0;
    }
}