#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

void find_char(char* array, int size, char searched_char);

int main ()
{
	char string[55] = "This is a string for testing";
	char *p = 'i';
    printf("%s\n", string);
    printf("I found %c in the following positions: ", p);
    find_char(string,strlen(string),p);

	return 0;
}

void find_char(char* array, int size, char searched_char){
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if(array[i] == searched_char){
            printf("%d. ", i+1);
            counter = 1;
        }
    }
    if(counter != 1)
        printf("There is no %c in this string", searched_char);
}