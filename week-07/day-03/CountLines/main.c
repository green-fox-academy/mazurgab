#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int count_lines(char* filename);

int main ()
{

    count_lines("../my_file.txt");

    return 0;
}

int count_lines(char* filename){

    FILE *file_pointer;
    if(file_pointer = fopen(filename, "r")){
        char line[200];
        int counter = 0;

        while(!feof(file_pointer)){
            fgets(line, sizeof(line), file_pointer);
            counter++;
        }

        fclose(file_pointer);

        printf("The file has: %d lines", counter);
        return counter;
    }else{
        return 1;
    }
}
