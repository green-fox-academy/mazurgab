#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char* concatenate(char *string1, char *string2);

int main()
{
    char* first = "stack";
    char* second = "overflow";
    printf("%s", concatenate(first, second));
    return 0;
}

char* concatenate(char *string1, char *string2){

    size_t size = strlen(string1) + strlen(string2);
    char* new = calloc(size + 1, sizeof(char));

    strcat(new, string1);
    strcat(new, string2);

    if (strlen(new) == 0){
        return "empty string";
    }else{
        return new;
    }
}