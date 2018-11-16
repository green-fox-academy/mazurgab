#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int Bunnies(int n);

int main() {

    std::cout<<Bunnies(8)<<std::endl;

    return 0;
}

int Bunnies(int n){
    if (n<=0){
        return 0;
    }return 2 + Bunnies(n-1);


}