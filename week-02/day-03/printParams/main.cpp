#include <iostream>
#include <string>

void printParams(std::string a);
void printParams(std::string a, std::string b);
void printParams(std::string a, std::string b, std::string c);

int main(int argc, char* args[]) {

    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")
    // ...

    printParams("one");
    printParams("two", "three");
    printParams("four", "five", "six");


    return 0;
}

void printParams(std::string a){
    std::cout << a << std::endl;
}

void printParams(std::string a, std::string b){
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}

void printParams(std::string a, std::string b, std::string c) {
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}
