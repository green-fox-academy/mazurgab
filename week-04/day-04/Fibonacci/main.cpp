#include <iostream>

// The fibonacci sequence is a famous bit of mathematics, and it happens to
// have a recursive definition. The first two values in the sequence are
// 0 and 1 (essentially 2 base cases). Each subsequent value is the sum of the
// previous two values, so the whole sequence is: 0, 1, 1, 2, 3, 5, 8, 13, 21
// and so on. Define a recursive fibonacci(n) method that returns the nth
// fibonacci number, with n=0 representing the start of the sequence.

int Fib(int n);

int main() {

std::cout<<Fib(2)<<std::endl;

    return 0;
}

int Fib(int n){
    if(n <= 1){
        return n;
    }else{
        return Fib(n-1)+Fib(n-2);
    }


}