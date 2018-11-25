#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    std::fstream myFile (R"(..\my-file.txt)");
    std::string text("Mazur Gabor");
    if (myFile.is_open()){
        myFile << text;
        std::cout<<"writing the file has ended"<<std::endl;
    }else{
        std::cout<<"Error opening file"<<std::endl;
        return 2;
    }
    myFile.close();

    return 0;
}