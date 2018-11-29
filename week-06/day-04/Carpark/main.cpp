#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Carpark.h"

Carpark readFromFile(std::string fileName);
void writeToFile(std::string fileName, Carpark carpark);

int main() {
    try{
        Carpark carpark = readFromFile("../cars.csv");

        std::cout << "Oldest: " << carpark.getOldest() << std::endl;
        std::map<int, int> penaltiesByYear = carpark.getPenaltiesByYear();
        for (std::pair<int, int> pair : penaltiesByYear) {
            std::cout << "Year: " << pair.first << " Number of cars without ticket: " << pair.second << std::endl;
        }

        carpark.removeCar(5);
        carpark.removeCar(3);

        carpark.modifyTicket(1, false);

        writeToFile("../newcars.csv", carpark);

    }catch(int e){
        if(e == 2){
            std::cout << "cars.csv could not be opened" << std::endl;
            return 2;
        }else if( e == 3){
            std::cout << "newcars.csv could not be opened" << std::endl;
            return 3;
        }
    }
    return 0;
}

Carpark readFromFile(std::string fileName)
{
    std::ifstream file(fileName);
    if(file.is_open()){
        std::cout << "Open" << std::endl;
    }else{
        std::cout << "Your file is closed" << std::endl;
        throw 2;
    }

    Carpark carpark;
    std::string line;
    int idCounter = 1;
    while(std::getline(file, line)){
        std::istringstream stream(line);
        std::string word;
        std::string licencePlate;
        int year;
        int hasTicket;
        std::getline(stream, word, ',');
        licencePlate = word;
        std::getline(stream, word, ',');
        year = std::stoi(word, nullptr, 10);
        std::getline(stream, word, ',');
        hasTicket = std::stoi(word, nullptr, 10);
        Car car(idCounter, licencePlate, year, hasTicket == 1);
        carpark.addCar(car);
        ++idCounter;
    }

    return carpark;
}

void writeToFile(std::string fileName, Carpark carpark)
{
    std::ofstream file;
    file.open(fileName);
    if(file.is_open()){
        std::vector<Car> cars = carpark.getCars();
        for (int i = 0; i < cars.size(); ++i) {
            int ticket = cars[i].hasParkingTicket();
            file << cars[i].getLicencePlate() << "," << cars[i].getYear() << "," << ticket << std::endl;
        }
    }else{
        throw 3;
    }
}