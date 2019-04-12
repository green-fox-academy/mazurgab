#include <iostream>
#include <map>

size_t duplicateCount(const char* in);
int charCounter(const char* in);

int main() {
    duplicateCount("Indivisibilities");
    return 0;
}

size_t duplicateCount(const char* in)
{
    int numOfChars = 0;

    while (in[numOfChars] != '\0')
    {
        numOfChars++;
    }

    std::map<char, int> duplicates;

    for (int i = 0; i < numOfChars; ++i) {
        if(isupper(in[i])){
            int a = tolower(in[i]);
            if(duplicates.find((char)a) == duplicates.end()){
                duplicates.insert(std::pair<char, int>((char)a, 1));
            }else{
                duplicates[(char)a]++;
            }
        }else{
            if(duplicates.find(in[i]) == duplicates.end()){
                duplicates.insert(std::pair<char, int>(in[i], 1));
            }else{
                duplicates[in[i]]++;
            }
        }
    }
    size_t counter = 0;

    for(auto it = duplicates.cbegin(); it != duplicates.cend(); ++it )
        if (it ->second > 1) {
            counter++;
        }
    std::cout<<counter<<std::endl;
    return counter;
}