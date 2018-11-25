#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool CopyFile(std::string origFile, std::string newFile);

int main() {

    CopyFile("../my-file.txt", "../my-file2.txt");

    return 0;
}

bool CopyFile(std::string origFile, std::string newFile){

    std::ifstream read;
    std::ofstream write;
    std::string aLine;
    read.open(origFile);
    write.open(newFile);
    try{
        if(read.is_open() && write.is_open()){
            while(getline(read, aLine)){
                write << aLine << std::endl;
            }
            std::cout << "Copying done!" << std::endl;
            write.close();
            read.close();
        } else
            throw -1;
    } catch (int e){
        std::cerr << "Error opening files!" << std::endl;
    }
    return true;
}