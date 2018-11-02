#include <iostream>

int main(int argc, char* args[]) {

    // Crate a program that draws a chess table like this
    //
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %



    for (int i=1; i<9; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j < 9; j++) {
                if (j % 2 == 1) {
                    std::cout << "%";
                } else {
                    std::cout << " ";
                }
            }
        } else {
            for (int k = 1; k < 9; k++) {
                if (k % 2 == 1) {
                    std::cout << " ";
                } else {
                    std::cout << "%";
                }
            }
            std::cout << std::endl;
        }

    }

    return 0;
}