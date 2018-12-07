#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main ()
{
    FILE *file_pointer;
    file_pointer = fopen("../my_file.txt", "w");

    fprintf(file_pointer, "quite a boring exercise");

    fclose(file_pointer);

    return 0;
}