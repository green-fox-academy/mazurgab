#include <stdio.h>

int equal(int first, int second);

int main() {
    int first;
    printf("Please give the first integer: \n");
    scanf("%d", &first);

    int second;
    printf("Please give the second integer: \n");
    scanf("%d", &second);

    equal(first, second);

    return 0;
}

int equal(int first, int second){
    if(first == second){
        printf("The numbers are equal");
        return 1;
    }else{
        printf("The numbers are different");
        return 0;
    }
}