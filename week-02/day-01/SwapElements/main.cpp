
#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    std::string abc[] = {"first", "second", "third"};

    std::string d;

    d = abc[0];
    abc[0] = abc[2];
    abc[2] = d;

    for (int i=0; i<3; i++) {


        std::cout << abc[i] << std::endl;
    }



    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`

    return 0;
}