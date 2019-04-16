#include <iostream>
#include <string>
#include <algorithm>

std::string reverse(const std::string& text);

int main(int argc, char* args[])
{
    std::string text = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.

    std::cout << reverse(text) << std::endl;

    return 0;
}

std::string reverse(const std::string& text)
{
    std::string reversed = text;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}