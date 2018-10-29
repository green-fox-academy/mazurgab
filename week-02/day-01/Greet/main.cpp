#include <iostream>
#include <string>



std::string greet();

int main(int argc, char* args[]) {

    std::string a1 = "Greenfox";
    std::cout<<greet()<<a1<<std::endl;


    // - Create a string variable named `al` and assign the value `Greenfox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Greenfox`
    // - Greet `al`

    return 0;
}

std::string greet (){

    std::string hello = "Greeting dear, ";
    return hello;
}