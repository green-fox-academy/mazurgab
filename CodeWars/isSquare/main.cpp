#include <iostream>

bool is_square(int n);

int main() {
    std::cout << is_square(1) << std::endl;
    return 0;
}

bool is_square(int n)
{
    if(n<0){
        return false;
    }else if (n == 0 || n == 1){
        return true;
    }else{
        for (int i = 1; i < n/2+1; i++) {
            if (n/i % 1 == 0 && (double)n/i == i){
                return true;
            }
        }
        return false;
    }
}