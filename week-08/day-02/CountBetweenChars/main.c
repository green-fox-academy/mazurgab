#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_between_chars(const char* word);

int main()
{
    // Create a function which takes a string as a parameter and
    // returns the number of characters between two repeating characters
    // the repeating char can be a local variable in the function itself or
    // it can be passed to the function as parameter

    // the output should be: 6 (in this case the repeating char was 'g')

    char *word = "Programming";

    printf("%d", count_between_chars(word));

    return 0;
}

int count_between_chars(const char* word){
    int max = 0;
    int i = 0;
    int j = 0;
    while (word[i] != '\0') {
        j = i;
        while (word[j] != '\0') {
            if (word[j] == word[i] && (j - i > max))
                max = j - i;
            j++;
        }
        i++;
    }
    return max - 1;
}