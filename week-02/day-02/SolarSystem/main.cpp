#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> putSaturn(const std::vector<std::string>& planets);

int main(int argc, char* args[])
{
    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Uranus Neptune Saturn

    for(const auto& planet : putSaturn(planets))
    {
        std::cout << planet << " ";
    }

    return 0;
}

std::vector<std::string> putSaturn(const std::vector<std::string>& planets)
{
    std::vector<std::string> planet = planets;
    planet.insert(planet.begin() + 5, "Saturn");

    return planet;
}
