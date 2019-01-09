#include<stdio.h>

int count_vowels(const char []);
int check_vowel(char);
int read_file(char *filename);

int main() {
    printf("Number of vowels: %d\n", read_file("../text.txt"));
    return 0;
}

int read_file(char *filename) {
    int counter = 0;
    FILE *fp;
    fp = fopen(filename, "r");
    char line[200];
    if (fp == NULL) {
        printf("Can't open the file");
        return -1;
    } else {
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            counter += count_vowels(line);
        }
    }
    fclose(fp);
    return counter;
}

int count_vowels(const char a[]) {
    int count = 0, c = 0, flag;
    char d;

    do {
        d = a[c];

        flag = check_vowel(d);

        if (flag == 1)
            count++;

        c++;
    } while (d != '\0');

    return count;
}

int check_vowel(char ch) {
    FILE *fpw;
    fpw = fopen("just_some_vowels.txt", "a");
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        fprintf(fpw, "%c", ch);
        return 1;
    }
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        fprintf(fpw, "%c", ch);
        return 1;
    }
    return 0;
}