#include <iostream>
#include <algorithm>
#include <vector>

std::string containsSeven(const std::vector<int>& numbers);
std::string containsSeven_stdfind(const std::vector<int>& numbers);

int main(int argc, char* args[])
{
    const std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Write a method that checks if the arrayList contains "7" if it contains return "Hoorray" otherwise return "Noooooo"
    // The output should be: "Noooooo"
    // Do this with 2 different solutions. First should iterate through the vector and check every element one by one and the second should use std::find

    // Expected output: "Noooooo"
    std::cout << containsSeven(numbers) << std::endl;
    // Expected output: "Noooooo"
    std::cout << containsSeven_stdfind(numbers) << std::endl;

    return 0;
}

std::string containsSeven(const std::vector<int>& numbers)
{
    for (int i=0; i < numbers.size(); ++i){

        if (numbers[i] == 7){
            return "Huurray";
        }else{
            i++;
        }
    }
    return "Noooooo";
}

std::string containsSeven_stdfind(const std::vector<int>& numbers)
{
    if (std::find(numbers.begin(), numbers.end(), 7) != numbers.end()) {
        return "Huurray";
    }else{
        return "Nooooo";
    }
}
