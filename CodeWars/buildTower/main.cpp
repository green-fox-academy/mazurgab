#include <iostream>
#include <string>
#include <vector>

class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        std::vector <std::string> piramid;
        std::string a;

        for (int i = 0; i < nFloors; i++) {
            // number of "*": 2 * nFloors - 1 - (2 * i)
            // number of " ": 2 * i

            a = "";

            for (int j = 0; j < i; ++j) {
                a += " ";
            }
            for (int k = 0; k < 2 * nFloors - 1 - (2 * i); ++k) {
                a += "*";
            }
            for (int l = 0; l < i; ++l) {
                a += " ";
            }
            piramid.insert(piramid.begin(), a);
        }
        return std::vector<std::string>();
    }
};


int main() {
    Kata kata;
    kata.towerBuilder(6);
    return 0;
}