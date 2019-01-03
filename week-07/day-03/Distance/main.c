#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int distance(char* array, int size, char searched_char);

int main ()
{
    char str[] = "This is a sample string";
    char p = 's';
    distance(str,strlen(str),p);

    return 0;
}

int distance(char* array, int size, char searched_char){
    int first_found = 0;
    int last_char_found = 0;
    int counter = 0;

    for (int i = 0; i < size; ++i) {
        if(array[i] == searched_char){
            first_found = i + 1;
            break;
        }
    }

    for (int j = 0; j < size; ++j) {
        if(array[j] == searched_char){
            last_char_found = j + 1;
            counter++;
        }
    }

    printf("First found: %d\n", first_found);
    printf("Last found: %d\n", last_char_found);
    printf("Counter: %d\n", counter);
    printf("Distance: %d\n", last_char_found - first_found);

    if(counter == 0){
        printf("The char not found\n");
        return -1;
    }else if(counter == 1){
        printf("The char only occurance is at: %d\n", first_found);
        return -2;
    }else{
        return last_char_found - first_found;
    }
}