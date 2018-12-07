#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number parameter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

void MultipleLines(char* filename, char* word, int number);

int main()
{
    MultipleLines("../my_file.txt", "apple", 5);
    return 0;
}

void MultipleLines(char* filename, char* word, int number){
    FILE *file_pointer;
    file_pointer = fopen(filename, "w");

    for (int i = 0; i < number; ++i) {
        fprintf(file_pointer, word);
        fprintf(file_pointer, "\n");
    }
    fclose(file_pointer);
}