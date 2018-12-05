#include <iostream>
#include <fstream>
#include <sstream>
#include "Cars.h"

/*van egy ilyen fajlod:

230;Green;1200
250;Red;950
100;Green;1300
330;Blue;888
100;Black;2500

valaszolj az alabbi kerdesekre

Write a Car class. The Car class has the following members:
- maxSpeed(int)
- color(string)
- weight

        The Car class should have a constructor where we can give initial values to these members.
In main, create 5 Car objects with some values

        Put these Cars in a vector and create functions that answers the following questions:
- How many "Green" cars are in the vector?
- What is the weight of the fastest car?
- Are there any cars that weighs more than 1000?*/

std::string readFromFile(std::string fileName);

int main() {
    try{
        readFromFile("../Cars.txt");
    }catch(int e){
        if(e == 2){
            std::cout << "Cars.txt could not be opened" << std::endl;
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
    //std::map<std::string, int> rainyDays;
    int i = 0;
    while (std::getline(file, line)) {
        std::istringstream stream(line);
        std::string word;
        int maxSpeed;
        std::string color;
        int weight;
        std::getline(stream, word, ';');
        maxSpeed = std::stoi(word, nullptr, 10);
        std::getline(stream, word, ';');
        color = word;
        std::getline(stream, word, ',');
        weight = std::stoi(word, nullptr, 10);

    }

}