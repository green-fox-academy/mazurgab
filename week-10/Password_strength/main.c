#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* password_strength(char* password, int size);
int check_digits(char* password, int size);
int check_puncts(char* password, int size);

int main() {

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
