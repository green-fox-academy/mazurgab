#include <iostream>
#include <string.h>
#include <vector>

std::string highAndLow(const std::string& numbers);

int main() {
    highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4");
    return 0;
}

std::string highAndLow(const std::string& numbers){
    std::vector<int>num;

    const char * c = numbers.c_str();

    char *p = strtok(const_cast<char*>(c), " ");
    while (p) {
        int a = atoi(p);
        num.push_back(a);
        p = strtok(NULL, " ");
    }

    int lowest = num[0];
    int highest = num[0];
    for (int j = 0; j < num.size(); ++j) {
        if(num[j] < lowest){
            lowest = num[j];
        }
        if(num[j] > highest){
            highest = num[j];
        }
    }

    char str1[12];
    char str2[12];
    sprintf(str1, "%d", highest);
    sprintf(str2, "%d", lowest);

    std::string result = str1 + (std::string)" " + str2;
    return result;
}