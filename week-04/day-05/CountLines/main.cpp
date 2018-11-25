#include <iostream>
#include <fstream>
#include <string>

int linesInFile(std::string fileName);

int main () {

    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::string file = "../my-file.txt";
    std::cout << "There are " << linesInFile(file) << " lines in the file!" << std::endl;

    return 0;
}

int linesInFile(std::string fileName){

    std::ifstream myFile(fileName);
    int lines = 0;
    std::string text;
    if (myFile.is_open()){
        if( myFile.peek() == std::ifstream::traits_type::eof() ) {
            std::cout<<"The file is empty"<<std::endl;
        }else{
            while(!myFile.eof()){
                getline(myFile, text);
                std::cout << text << std::endl;
                lines++;
            }
        }
    }else{
        std::cout<<"Error opening file"<<std::endl;
        return 0;
    }
    myFile.close();
    return lines;
}