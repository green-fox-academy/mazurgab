#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum SCREEN_SIZE {
    SMALL,
    MEDIUM,
    BIG
};

typedef struct smartphones{
    char name[256];
    int year;
    enum SCREEN_SIZE type;
}smartphones_t;

int file_read(char* path, smartphones_t* phones);
char* getSCREEN_SIZE(smartphones_t* array, int index);
char* get_oldest_phone(smartphones_t* array, int size, char* oldest);
int get_screen_size_count(smartphones_t* array, int size, enum SCREEN_SIZE screen_size, int count);
void price_calculator(smartphones_t* array, int size);

int main() {

    char* path = "../smartphones.txt";
    smartphones_t phones[256];
    char oldest[256];
    file_read(path, phones);
    int lines = file_read(path,phones);
    printf("-----------------------------------------\n");
    printf("The %s is the oldest device in the database\n", get_oldest_phone(phones, lines, oldest));
    printf("-----------------------------------------\n");
    printf("There are %d phones with BIG (>= 15 cm) screen size\n", get_screen_size_count(phones, lines, BIG, 0));
    printf("-----------------------------------------\n");
    printf("There are %d phones with SMALL (< 12 cm) screen size\n", get_screen_size_count(phones, lines, SMALL, 0));
    printf("-----------------------------------------\n");
    price_calculator(phones,lines);
    return 0;
}

int file_read(char* path, smartphones_t* phones){
    FILE *file_pointer;
    file_pointer = fopen(path, "r");

    int counter = 0;
    int i = 0;
    char *ptr;
    if (file_pointer != NULL) {
        char line[256];
        while (fgets(line, sizeof line, file_pointer) != NULL) {
            char *pch = strtok(line, " ");
            while (pch != NULL) {
                switch (counter) {
                    case 0  :
                        strcpy(phones[i].name, pch);
                        break;
                    case 1  :
                        phones[i].year = strtol(pch, &ptr, 10);
                        break;
                    case 2  :
                        if(strtol(pch, &ptr, 10) >= 15)
                            phones[i].type = BIG;
                        else if(strtol(pch, &ptr, 10) >= 12)
                            phones[i].type = MEDIUM;
                        else if(strtol(pch, &ptr, 10) < 12)
                            phones[i].type = SMALL;
                        break;
                    default :
                        printf("Something went wrong");
                }
                pch = strtok(NULL, " ");
                counter++;
            }
            i++;
            counter = 0;
        }
        fclose(file_pointer);
    } else {
        perror(path);
    }
    fclose(file_pointer);
    for (int j = 0; j < 15; ++j) {
        printf("%s %d %s\n", phones[j].name, phones[j].year, getSCREEN_SIZE(phones,j));
    }
    return i;

}

char* getSCREEN_SIZE(smartphones_t* array, int index){
    if(array[index].type == SMALL)
        return "small";
    else if(array[index].type == MEDIUM)
        return "medium";
    else if(array[index].type == BIG)
        return "big";
}

char* get_oldest_phone(smartphones_t* array, int size, char* oldest){
    int old = array[0].year;
    for (int i = 1; i < size; ++i) {
        if(array[i].year < old){
            old = array[i].year;
            strcpy(oldest, array[i].name);
        }
    }
    return oldest;
}

int get_screen_size_count(smartphones_t* array, int size, enum SCREEN_SIZE screen_size, int count){
    for (int i = 0; i < size; ++i) {
        if(array[i].type == screen_size) {
            count++;
        }
    }
    return count;
}

void price_calculator(smartphones_t* array, int size){
    int price = 0;
    int amortization = 0;
    int current_year = 2019;
    FILE *file = fopen("prices.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    for (int i = 0; i <size ; ++i) {
        if(current_year - array[i].year < 5){
            amortization = (current_year - array[i].year) * 50;
        }else if (current_year - array[i].year >= 5){
            amortization = 250;
        }

        if(array[i].type == SMALL){
            price = 300 - amortization;
        }else if (array[i].type == MEDIUM){
            price = 400 - amortization;
        }else if (array[i].type == BIG){
            price = 600 - amortization;
        }
        fprintf(file, "%s %d\n", array[i].name, price);
        printf("%s : %d\n", array[i].name, price);
        price = 0;
        amortization = 0;
    }
}
