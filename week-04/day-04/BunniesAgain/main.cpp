#include <iostream>

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

int Bunnies (int n);

int main() {

std::cout<<Bunnies(5)<<std::endl;

    return 0;
}

int Bunnies (int n){
    if (n<1){
        return 0;
    }else if(n % 2 == 0){
        return 3 + Bunnies(n-1);
    }else if (n % 2 == 1){
        return 2 + Bunnies(n-1);
    }


}