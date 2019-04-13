#include <iostream>
#include <vector>
#include <math.h>

class Tortoise
{
public:
    static std::vector<int> race(int v1, int v2, int g){

        std::vector <int> timeVector;

        if(v2 > v1){
            double time =  ((double) (g * v1) / (v2 - v1)) / v1;
            std::cout<<time<<std::endl;
            double hours = time - fmod(time, 1);
            std::cout<<hours<<std::endl;
            double minutes = (60 * time - (fmod(60 * time, 1))) - hours * 60;
            std::cout<<minutes<<std::endl;
            double secs = roundf((float)fmod(60 * time, 1) * 60);
            std::cout<<secs<<std::endl;

            timeVector.push_back((int)hours);
            timeVector.push_back((int)minutes);
            timeVector.push_back((int)secs);
        }else{
            for (int i = 0; i < 3; ++i) {
                timeVector.push_back(-1);
            }
        }
        return timeVector;
    }
};

int main() {
    Tortoise::race(80, 91, 37);
    return 0;
}