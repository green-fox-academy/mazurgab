#include <iostream>

// Create a recursive function called `refactorio`
// that returns it's input's factorial

int Fact(int n);

int main() {

    std::cout<<Fact(5)<<std::endl;

    return 0;
}

int Fact(int n){
    if(n<1)
        return 1;
    else
        return n * Fact(n-1);

}