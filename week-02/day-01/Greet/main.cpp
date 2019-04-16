#include <iostream>
#include <string>



void greet(std::string str);

int main(int argc, char* args[]) {

    std::string a1 = "Greenfox";
    greet(a1);

    // - Create a string variable named `al` and assign the value `Greenfox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Greenfox`
    // - Greet `al`

    return 0;
}

void greet (std::string str){

    std::cout<<"Greeting dear, "<<str<<std::endl;

}