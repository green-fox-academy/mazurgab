#include <iostream>
#include <math.h>
#include <iomanip>

class ASum
{
public:
    static long long findNb(long long m){
        if(fmod(sqrt(m),1) == 0){
            double n = ((sqrt(8*(sqrt(m))+1) - 1) / 2);
            std::cout<< std::setprecision(30) << n <<std::endl;
            return (long long)n;
        }else{
            std::cout<<"-1"<<std::endl;
            return -1;
        }
    }
};

int main() {
    ASum::findNb(1025292944081385001);
    return 0;
}