#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char* args[]) {

    int aj[] = {3, 4, 5, 6, 7};

    auto cpp_array_begin = std::begin(aj);
    auto cpp_array_end = std::end(aj);

    std::reverse(cpp_array_begin, cpp_array_end);

    for (int i = 0; i < (sizeof(aj)/sizeof(aj[0])); ++i) {
        std::cout<<aj[i]<< ", ";
    }

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    return 0;
}