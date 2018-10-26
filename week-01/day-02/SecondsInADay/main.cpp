#include <iostream>

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    int Sec = 86400;

    int Sec1 = currentHours * 60 * 60 ;
    int Sec2 = currentMinutes * 60 ;

    int RemSec = Sec - (Sec1 + Sec2 + currentSeconds);

    std::cout << RemSec << std::endl;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    return 0;
}