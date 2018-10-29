#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    std::string animals[] = {"koal", "pand", "zebr"};

    for (int i=0; i<3; i++) {
        std::cout << "a" << animals[i] << std::endl;
    }
    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end

    return 0;
}