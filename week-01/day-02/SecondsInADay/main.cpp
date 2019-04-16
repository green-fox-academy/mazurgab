#include <iostream>
#include <ctime>

int main(int argc, char* args[]) {

    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    std::cout << (now->tm_hour) << ':'
              << (now->tm_min) << ':'
              <<  now->tm_sec
              << "\n";

    int currentHours = now->tm_hour;
    int currentMin = now->tm_min;
    int currentSec = now->tm_sec;

    std::cout <<"Remaining seconds today: "<< 86400 - ((currentHours * 3600) + (currentMin*60) + currentSec) << std::endl;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    return 0;
}