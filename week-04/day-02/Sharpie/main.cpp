#include <iostream>
#include "Sharpie.h"

int main() {

    Sharpie pen("black", 0.25f);
    pen.use();
    std::cout<<"Color: "<<pen.getColor() <<", Width: "<<pen.getWidth()<<", The amount of the ink: "<<pen.getInkAmount()<<std::endl;



    return 0;
}