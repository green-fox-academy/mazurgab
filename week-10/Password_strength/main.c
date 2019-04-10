#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* password_strength(char* password, int size);
int check_digits(char* password, int size);
int check_puncts(char* password, int size);

extern int number;

int by_value(int a);
int by_pointer (int *b);

typedef struct value{
    int age;
    char* first_name;
}value_t;

int main() {

    char first[1];
    strcpy(first, "Hello");
    char second [6];
    strcpy(second, "world");
    strcat(first, second);
    printf("%s\n", first);

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char*
    ));
    printf("%d\n", sizeof(value_t));

    int array[5];
    int* p;
    p = array;
    printf("%d\n", sizeof(array));
    printf("%d\n", sizeof(p));

    printf("%d\n", number);
    int number2 = 1;

    by_value(number2);

    printf("%d\n", number2);

    by_pointer (&number2);

    printf("%d\n", number2);

    switch(number2)
    {
        case 0:
            printf("first");
            break;
        case 1:
            printf("second");
        case 2:
            printf("third");
            break;
    }

    char password[50];
    printf("Please give the password: ");
    scanf("%s", password);

    int size = strlen(password);
    printf("The password's strength: %s", password_strength(password, size));

    return 0;
}

char* password_strength(char* password, int size){

    if(size<4 || size>30){
        return "ERROR";
    }else if( size >= 10 && check_digits(password, size) >= 4 && check_puncts(password, size) >= 2){
        return "STRONG";
    }else if(size >= 6 && check_digits(password, size) >= 1){
        return "MODERATE";
    }else if(size >= 4){
        return "WEAK";
    }
}

int check_digits(char* password, int size){
    int digit_counter = 0;
    for (int i = 0; i < size; ++i) {
        if (isdigit(password[i])){
            digit_counter++;
        }
    }
    return digit_counter;
}

int check_puncts(char* password, int size){
    int punct_counter = 0;
    for (int i = 0; i < size; ++i) {
        if (ispunct(password[i])){
            punct_counter++;
        }
    }
    return punct_counter;
}

int by_value(int a){
    char *b;
    char* p = malloc (sizeof(char)* 10);
    a++;
    return a;
}
int by_pointer (int *b){
    (*b)++;
    return *b;
}
