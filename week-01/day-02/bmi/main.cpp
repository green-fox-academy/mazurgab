#include <iostream>

int main(int argc, char* args[]) {

    double massInKg = 81.2;
    double heightInM = 1.78;

    std::cout << " Your BMI is " << (massInKg) / (heightInM * heightInM) << std::endl;

    // Print the Body mass index (BMI) based on these values

    return 0;
}