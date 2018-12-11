#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int substring(char str1[], char str2[]);

int main() {
    char str1[100];
    char str2[100];

    printf("Give two strings: ");
    gets(str1);
    gets(str2);
    if (substring(str1, str2) == -1) {
        printf("they are equal");
    } else if (substring(str1, str2) == 0) {
        printf("Not found");
    } else {
        printf("found");
    }
    return 0;
}

int substring(char str1[], char str2[]) {
    if (strlen(str1) == strlen(str2)) {
        return -1;
    } else if (strlen(str1) < strlen(str2)) {
        if (strstr(str2, str1) == 0) {
            return 0;
        } else {
            return 1;
        }
    } else if (strlen(str1) > strlen(str2))
        if (strstr(str1, str2) == 0) {
            return 0;
        }else{
            return 1;
        }
}