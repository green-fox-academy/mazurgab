#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int s[] = {1, 2, 3, 8, 5, 6};

    std::cout << "The array's original fourth element is: " << s[3] << std::endl;

    s[3] = 4;

    std::cout << "The array's new fourth element is: " << s[3] << std::endl;

    // - Create an array variable named `s`
    //   with the following content: `[1, 2, 3, 8, 5, 6]`
    // - Change the 8 to 4
    // - Print the fourth element

    return 0;
}