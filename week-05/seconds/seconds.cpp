#include <iostream>
#include <vector>

std::vector <int> SecondParams (std::vector <int> v);

int main()
{
    // Create a function that takes a vector as a parameter,
    // and returns a new vector with every second element from the original vector
    // example: [1, 2, 3, 4, 5] should produce [2, 4] - print this result

    std::vector <int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    SecondParams(a);

    return 0;
}

std::vector <int> SecondParams (std::vector <int> v){

    std::vector <int> newVector;

    for (int i=1; i<v.size(); i += 2){
        newVector.push_back (v[i]);
    }

    for (int j=0; j < newVector.size(); ++j)
        std::cout<<newVector[j]<<", ";

    return newVector;
}