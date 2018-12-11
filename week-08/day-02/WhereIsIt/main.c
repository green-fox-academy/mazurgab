#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search(const char str[], char ch);


int main()
{
    // Create a program which asks for a string and a character and stores them
    // Create a function which takes a string and a character as a parameter and
    // if the given character is in the string, it should return the index of the
    // first appearance (in the given string) otherwise the function should return -1
    //
    // Example:
    //
    // Case 1:
    //
    // given_string = "embedded"
    // given_char = 'd'
    //
    // the function should return: 4, because this is the index of the first appearance of char 'd'
    //
    //
    // Case 2:
    //
    // given_string = "embedded"
    // given_char = 'a'
    //
    // the function should return: -1, because there is no 'a' in the word "embedded"

    char string1[20];
    char character[1];
    printf("Please give a string and a character: ");
    scanf("%s %c",string1, character);


    if(search(string1, *character) == -1){
        printf("The character is not found");
    }else{
        printf("The index of the first appearance is: %d", search(string1, *character));
    }

    return 0;
}

int search(const char str[], char ch) {
    for (int i = 0; str[i]!='\0' ; ++i) {
        if(str[i]==ch){
            return i+1;
        }
    }return -1;
    /*Version 2
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            return i+1;
        }
        i++;
    }
    return -1;
    Version 3
    char *e;
    e = strchr(str, ch);
    if(e!= nullptr){
        int index = (int)(e - str);
        return index+1;
    }
    return -1;*/
}