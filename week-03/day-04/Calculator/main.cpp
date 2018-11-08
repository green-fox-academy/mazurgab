#include <iostream>

void calculator (std::string x, int y, int z);

int main(int argc, char* args[])
{
    // Create a simple calculator application which reads the parameters from the prompt
    // and prints the result to the prompt.
    // It should support the following operations,
    // create a method named "calculate()":
    // +, -, *, /, % and it should support two operands.
    // The format of the expressions must be: {operation} {operand} {operand}.
    // Examples: "+ 3 3" (the result will be 6) or "* 4 4" (the result will be 16)


    // It should work like this:
    // Start the program
    // It prints: "Please type in the expression:"
    // Waits for the user input
    // Print the result to the prompt
    // Exit
    std::string a;
    int b;
    int c;
    std::cout<<"Please type in the expression(The format of the expressions must be: {operation} {operand} {operand}) : "<<std::endl;
    std::cin>> a >> b >> c ;

    calculator(a, b, c);


    return 0;
}

void calculator (std::string x, int y, int z){
    if (x == "+"){
        int sum = y + z;
        std::cout<<"The result is :"<<sum<<std::endl;
    }else if(x == "-"){
        int substraction = y - z;
        std::cout<<"The result is :"<<substraction<<std::endl;
    }else if(x == "*"){
        int multiple = y * z;
        std::cout<<"The result is :"<<multiple<<std::endl;
    }else if(x == "/"){
        int divide = y / z;
        std::cout<<"The result is :"<<divide<<std::endl;
    }else if(x == "%"){
        int divide2 = y % z;
        std::cout<<"The result is :"<<divide2<<std::endl;
    }

}