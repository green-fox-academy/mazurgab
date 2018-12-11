#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *append(char str[]);

int main()
{
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string

    char string1[20];
    printf("Please give a string: ");
    scanf("%s", string1);

    append(string1);

    printf("The new string: %s", string1);

    return 0;
}

char *append(char str[]) {
    strcat(str, "a");
    return str;
}