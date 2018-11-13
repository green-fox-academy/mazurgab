#include "Sharpie.h"

Sharpie::Sharpie(std::string color, float width) {
    _color = color;
    _width = width;
    _inkAmount = 100;

}

int Sharpie::getInkAmount(){
    return _inkAmount;
}

std::string Sharpie::getColor(){
    return _color;
}

float Sharpie::getWidth(){
    return _width;
}

void Sharpie::use(){
    _inkAmount--;
}