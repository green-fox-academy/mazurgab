#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int NumberAdder(int n);

int main() {

    std::cout<<NumberAdder(5)<<std::endl;

    return 0;
}

int NumberAdder(int n){
    if (n==0){
        return 0;
    }else{
        return n + NumberAdder(n-1);
    }

}