#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
int SumDigit (int n);

int main() {

    std::cout<<SumDigit(3748);

    return 0;
}

int SumDigit (int n){
    int m = 0;

    if (n<=9){
        return n;
    }else{
        m = n % 10;
        n /= 10;
        return m + SumDigit(n);
    }
}