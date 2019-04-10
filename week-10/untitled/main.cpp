#include <iostream>
#include <vector>
#include <math.h>

class DigPow
{
public:
    static int digPow(int n, int p) {
        int m = 0;
        std::vector<int>digits;
        double sum = 0;
        int number = n;

            for(int i=0; i<5; i++){
                m = n % 10;
                if(m != 0){
                    digits.insert(digits.begin(), m);
                }
                n /= 10;
            }

        for(int j=0; j<digits.size(); j++){
            std::cout<<digits[j];
            sum += pow(digits[j], p+j);
        }
        std::cout<<std::endl;

        double k = sum / number;

        if (fmod(k, 1) == 0){
            //std::cout<<k<<std::endl;
            return (int)k;
        }else{
            return -1;
        }
    }
};

int main() {

    std::cout<<DigPow::digPow(89, 1)<<std::endl;
    return 0;
}