#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int Power (int i, int j);

int main() {

    std::cout<<Power(3, 4)<<std::endl;

    return 0;
}

int Power (int i, int j){
    if (i < 1 || j < 1){
        return 1;
    }else{
        return i * Power (i, j-1);
    }



}