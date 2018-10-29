#include <iostream>
#include <string>

int doubling(int x);

int main(int argc, char* args[]) {

    int baseNum = 123;
    int value = doubling(baseNum);
    std::cout<<baseNum<< " * 2 = "<<value<<std::endl;

    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`

    return 0;
}

int doubling(int x) {

    int result = x * 2;
    return result;
}