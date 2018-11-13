
#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H
#include <iostream>

class Sharpie {
public:
    Sharpie(std::string color, float width);
    int getInkAmount();
    std::string getColor();
    float getWidth();

    void use();


private:
    std::string _color;
    float _width;
    float _inkAmount;




};


#endif //SHARPIE_SHARPIE_H
