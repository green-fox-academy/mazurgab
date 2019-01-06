#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//In the file you can find the best grossing movies in the format: [Title] [Profit] [Release date]
//Make a function that reads the data and returns a pointer to the data and the size. The function should not use more memory than necessary.
//Print the summed profit grouped by year
//Which was the most successful year in the movie industry?

int read_size(char* path);
int read_data(char* path, char** title, char** profit_string, int* release_year);
void convert_profit_to_double(int lines, char** profit_string, double** income);

int main()
{
    char* path = "../movies.txt";
    int lines = 0;
    lines = read_size(path);
    //printf("lines: %d\n", lines);

    char** title = (char**) malloc(lines * sizeof(char));
    char** profit_string = (char**) malloc (lines * sizeof(char));
    int* release_year = (int*) malloc(lines * sizeof(int));

    read_data(path, title, profit_string, release_year);

    double** income = (double**) malloc(lines * sizeof(double));

    printf("----------------------------------\n");

    convert_profit_to_double(lines, profit_string, income);

    return 0;
}

int read_size(char* path){
    FILE *file_pointer;
    file_pointer = fopen(path, "r");

    char line[256];
    int lineNumber = 0;

    if (file_pointer == NULL) {
        printf("Can't open the file!\n");
        return -1;
    }else{
        while (fgets(line, sizeof line, file_pointer) != NULL){
            lineNumber++;
        }
        fclose(file_pointer);
    }
    printf("%d\n", lineNumber);
    return lineNumber;
}

int read_data(char* path, char** title, char** profit_string, int* release_year){
    FILE *file_pointer;
    file_pointer = fopen(path, "r");

    char line[256];
    int line_count = 0;
    int count = 0;

    if (file_pointer == NULL) {
        printf("Can't open the file!\n");
        return -3;
    } else {
        while (fgets(line, sizeof line, file_pointer) != NULL) {
            char *data = strtok(line, "$");
            title[line_count] = (char *) malloc((strlen(data) + 1) * sizeof(char));
            strcpy(title[line_count], data);
            printf("title: %s\n", title[line_count]);
            while (data != NULL) {
                data = strtok(NULL, " ");
                count++;
                switch (count){
                    case 1 :
                        profit_string[line_count] = (char*) malloc ((strlen(data) + 1) * sizeof(char));
                        strcpy(profit_string[line_count], data);
                        break;
                    case 2:
                        release_year[line_count] = strtol(data, NULL, 10);
                        break;
                }
            }
            printf("profit: %s\n", profit_string[line_count]);
            printf("release year: %d\n", release_year[line_count]);
            count = 0;
            line_count++;
        }
    }
    fclose(file_pointer);
    return 0;
}

void convert_profit_to_double(int lines, char** profit_string, double** income){

    for (int i = 0; i <lines; ++i) {
        printf("%d : %s, %d\n", i, profit_string[i], strlen(profit_string[i]));
    }

    for (int j = 0; j < lines; ++j) {
        income[j] = 0;
        if(strlen(profit_string[j]) == 11){
            printf("jaja 11\n");

        }else if(strlen(profit_string[j]) == 13){
            printf("jaja 13\n");

        }else{
            printf("strlen is not 11 or 13");
        }
    }
}