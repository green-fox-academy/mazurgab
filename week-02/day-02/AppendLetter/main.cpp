#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> appendA(std::vector<std::string> animals);

int main(int argc, char* args[])
{
    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};

    // Create a function called "appendA()" that adds "a" to every string in the "animals" list.
    // The parameter should be a vector.

    for(const auto& animal : appendA(animals))
    {
        std::cout << animal << " ";
    }

    return 0;
}

std::vector<std::string> appendA(std::vector<std::string> animals ){

    for(int i=0; i < animals.size(); ++i) {

        animals[i].append("a");

    }

    return animals;

}