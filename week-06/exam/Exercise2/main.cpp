#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <algorithm>

std::string readFromFile(std::string fileName);

int main() {
    try{
        readFromFile("../cities.csv");
    }catch(int e){
        if(e == 2){
            std::cout << "cities.csv could not be opened" << std::endl;
            return 2;
        }
    }
    return 0;
}

std::string readFromFile(std::string fileName) {

    std::ifstream file(fileName);
    if (file.is_open()) {
        std::cout << "Open" << std::endl;
    } else {
        std::cout << "Your file is cannot be reached" << std::endl;
        throw 2;
    }

    std::string line;
    std::map<std::string, int> rainyDays;
    while (std::getline(file, line)) {
        std::istringstream stream(line);
        std::string word;
        std::string date;
        std::string cityName;
        std::string weather;
        std::getline(stream, word, ',');
        date = word;
        std::getline(stream, word, ',');
        cityName = word;
        std::getline(stream, word, ',');
        weather = word;
        if (weather == "RAINY") {
            if (rainyDays.find(cityName) == rainyDays.end()) {
                rainyDays.insert(std::pair<std::string, int>(cityName, 1));
            } else {
                rainyDays[cityName]++;
            }
        }
    }
    int currentMax = 0;
    std::string arg_max;

    for(auto it = rainyDays.cbegin(); it != rainyDays.cend(); ++it )
        if (it ->second > currentMax) {
        arg_max = it->first;
        currentMax = it->second;
        }
    std::cout<<arg_max<<std::endl;
    return arg_max;
}
