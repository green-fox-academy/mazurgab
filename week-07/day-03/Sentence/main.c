#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

void split(char array[]);

int main()
{
    char string[] = {"You wanna sail this ship against the winds by lighting a fire under her deck? I have no time for such a nonsense."};
    split(string);

    return(0);
}

void split(char array[]){
    for (char *p = strtok(array, " "); p != NULL; p = strtok(NULL, " "))
    {
        puts(p);
    }

}