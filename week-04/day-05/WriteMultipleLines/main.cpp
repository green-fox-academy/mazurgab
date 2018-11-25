#include <iostream>
#include <fstream>
#include <string>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

void WritingMultipleLinesToFile(const std::string &path, const std::string &word, int number);

int main() {

    WritingMultipleLinesToFile("../my-file.txt", "apple", 5);

    return 0;
}

void WritingMultipleLinesToFile(const std::string &path, const std::string &word, int number){

    std::fstream myFile (path);
    if (myFile.is_open()){
        for (int i = 0; i < number; ++i) {
            myFile << word + "\n";
        }
        std::cout<<"writing the file has ended"<<std::endl;
    }else{
        std::cout<<"Error opening file"<<std::endl;
    }
    myFile.close();
}
