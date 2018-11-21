#include "Scanner.h"
#include <iostream>

Scanner::Scanner(int speed) : _speed(speed) {}

int Scanner::getSpeed() const {
    return _speed;
}

void Scanner::scan() {
    std::cout<<"I'm scanning a document "<<getSpeed()<< "ppm"<<std::endl;
}