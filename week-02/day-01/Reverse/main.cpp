#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int aj[] = {3, 4, 5, 6, 7};
    int b[5];

    for (int j=0; j<5; j++) {

        b[j] = aj[4-j];
    }

    for (int i=0; i<5; i++) {

        aj[i] = b[i];
        std::cout<<aj[i]<<std::endl;
    }

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    return 0;
}