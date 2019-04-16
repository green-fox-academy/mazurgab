#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int numList[] = {3, 4, 5, 6, 7, 8};

    for (int i=0; i<(sizeof(numList)/sizeof(numList[0])); i++){

        numList[i] = numList[i] * 2;
        std::cout<< numList[i] << std::endl;
    }


    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    return 0;
}