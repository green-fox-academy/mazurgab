#include <iostream>

int main(int argc, char* args[]) {

    int a = 6;
    int b = 17;

    std::cout << "An attende codes a total of " << a * b * 5 << " hours in a semester" << std::endl;
    std::cout << "Percentage of the coding hours is " << (float)(a * b * 5) / (17 * 52) << " %" << std::endl;



    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52

    return 0;
}