#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int t[] = {1, 2, 3, 4, 5};

    t[2] += 1;

    std::cout << "The third element is: " << t[2] << std::endl;

    // - Create an array variable named `t`
    //    with the following content: `[1, 2, 3, 4, 5]`
    // - Increment the third element
    // - Print the third element

    return 0;
}