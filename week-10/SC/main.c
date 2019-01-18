#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check_alphas(char* sentence, int size);
int count_vowels(const char *a);
int check_vowel(char ch);

int main() {

    char temp[256];
    printf("Please give a sentence: ");
    scanf("%s", temp);

    char* sentence = (char*) malloc ((strlen(temp) + 1)*sizeof(char));
    strcpy(sentence, temp);
    printf("sentence: %s\n", sentence);

    int size = strlen(sentence);
    printf("Number of letters in the sentence: %d\n", check_alphas(sentence, size));
    printf("Number of vowels in the sentence: %d\n", count_vowels(sentence));

    if(count_vowels(sentence) > check_alphas(sentence, size) - count_vowels(sentence)){
        printf("VOWEL_HEAVY");
    }else if(count_vowels(sentence) < check_alphas(sentence, size) - count_vowels(sentence)){
        printf("CONSONANT_HEAVY");
    }else if(count_vowels(sentence) == check_alphas(sentence, size) - count_vowels(sentence)){
        printf("BALANCED");
    }

    free(sentence);

    return 0;
}

int check_alphas(char* sentence, int size){
    int alpha_counter = 0;
    for (int i = 0; i < size; ++i) {
        if (isalpha(sentence[i])){
            alpha_counter++;
        }
    }
    return alpha_counter;
}

int count_vowels(const char *a) {
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
    int vowel_counter = 0;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        vowel_counter++;
    }else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        vowel_counter++;
    }
    return vowel_counter;
}