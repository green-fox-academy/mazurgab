#include <iostream>
#include <fstream>
#include <string>

int main () {


    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    std::ifstream myFile (R"(..\my-file.txt)");
    std::string text;
    if (myFile.is_open()){
        if( myFile.peek() == std::ifstream::traits_type::eof() ) {
            std::cout<<"The file is empty"<<std::endl;
        }else{
            while(!myFile.eof()){
                getline(myFile, text);
                std::cout << text << std::endl;
                }
            }
        }else{
            std::cout<<"Error opening file"<<std::endl;
            return 2;
        }
        myFile.close();

    return 0;
}