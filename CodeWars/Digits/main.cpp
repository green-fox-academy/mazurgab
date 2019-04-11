#include <iostream>
#include <vector>
#include <math.h>

class DigPow
{
public:
  static int digPow(int n, int p){
        int m = 0;
        std::vector<int>digits;
        double sum = 0;
        int number = n;
        int number2 = n;

        int numberOfDigits = 0;
        do { number2 /= 10; numberOfDigits++;}
        while (number2 != 0);

        std::cout<<"number of digits: "<<numberOfDigits<<std::endl;

        for(int i=0; i<numberOfDigits; i++){
            m = n % 10;
            digits.insert(digits.begin(), m);
            n /= 10;
        }

        for (int l = 0; l < digits.size(); ++l) {
            std::cout<<"digits in the vector: "<<digits[l]<<std::endl;
        }

        for(int j=0; j<digits.size(); j++){
            sum += pow(digits[j], p+j);
        }

        double k = sum / number;

        std::cout<<"sum: "<<sum<<std::endl;
        std::cout<<"number: "<<number<<std::endl;
        std::cout<<"k: "<<k<<std::endl;

        if (fmod(k, 1) == 0){
            return (int)k;
        }else{
            return -1;
        }
    }
};


int main() {
    std::cout<<DigPow::digPow(65532, 3)<<std::endl;
    return 0;
}