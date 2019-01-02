#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_in_sentence(char* word, char* sentence);

int main()
{
    // Create a function which takes two strings as parameters
    // One string is actually a sentence and the other one is a word
    // It should return the index of the word in the sentence and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char *word = "doctor";
    char *sentence = "An apple a day keeps the doctor away.";

    is_in_sentence(word, sentence);

    return 0;
}

int is_in_sentence(char* word, char* sentence){

    int strLen  = strlen(sentence);
    int wordLen = strlen(word);
    int found;

    if(strstr(sentence, word) == 0){
        printf("Word not found");
        return 0;
    }else{
        int index = 0;
        for (int i=0; i<strLen - wordLen; i++){
            found = 1;
            for(int j=0; j<wordLen; j++)
            {
                if(sentence[i + j] != word[j])
                {
                    found = 0;
                    break;
                }
            }

            if(found == 1)
            {
                printf("'%s' found at index: %d \n", word, i);
                index = i;
            }
        }
        return index;
    }
}