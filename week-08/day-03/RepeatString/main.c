#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char* repeat(char* string, int num);

int main()
{
    char* string = "Apple";
    int num = 5;
    printf("%s", repeat(string, num));
    return 0;
}

char* repeat(char* string, int num){
    size_t size = (strlen(string) * num + 1);
    char* reps = calloc(size, sizeof(char));

    for (int i = 0; i < num ; ++i) {
        strcat(reps, string);
    }
    return reps;
}