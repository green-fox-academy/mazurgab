#include <iostream>
#include <string>
#include <bits/stdc++.h>

int CountAs (std::string fruits);

int main()
{
    // Create a function that takes a string parameter,
    // counts the occurrences of the letter "a", and returns it as a number.

    // example: on the input "Apple" the function should return 1 - print this result
    // example: on the input "Avocado" the function should return 2 - print this result
    // example: on the input "Blueberry" the function should return 0 - print this result

    std::string a = "Avocado";
    CountAs (a);

    return 0;
}

int CountAs (std::string fruits){

    int num = 0;
    int num2 = 0;

    num = count(fruits.begin(),fruits.end(),'a');
    num2 = count(fruits.begin(),fruits.end(),'A');
    std::cout<<"Number of occurrences: "<< num + num2 << std::endl;

    return num;
}
