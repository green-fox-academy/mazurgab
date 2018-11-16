#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

int CountDown (int n);

int main() {


std::cout<<CountDown(12);



    return 0;
}

int CountDown (int n){
    if (n<=0){
        return n;
    }else{
        std::cout<<n<<std::endl;
        return CountDown(n-1);
    }


}