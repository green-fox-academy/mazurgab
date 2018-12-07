#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each of lines form the file.
// You have to create the file, you can use C-programming but it is not mandatory

int main ()
{
    FILE *file_pointer;
    file_pointer = fopen("../my_file.txt", "r");

    char line[200];

    while(!feof(file_pointer)){
        fgets(line, sizeof(line), file_pointer);
        puts(line);
    }

    fclose(file_pointer);

    return 0;
}