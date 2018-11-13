#include <iostream>
#include "PostIt.h"

int main() {

    PostIt first ("orange", "blue", "Idea 1");
    PostIt second ("pink", "black", "Awesome");
    PostIt third ("yellow", "green", "Superb");

    std::cout<< "backgroundColor: "<< first.getBackgroundColor()<< " text: "<<first.getText()<< " textColor: "<<first.getTextColor()<<std::endl;
    std::cout<< "backgroundColor: "<< second.getBackgroundColor()<< " text: "<<second.getText()<< " textColor: "<<second.getTextColor()<<std::endl;
    std::cout<< "backgroundColor: "<< third.getBackgroundColor()<< " text: "<<third.getText()<< " textColor: "<<third.getTextColor()<<std::endl;
}