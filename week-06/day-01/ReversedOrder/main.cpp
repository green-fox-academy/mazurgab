#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void getDecrypted(std::string file);

int main() {
    // Create a program that decrypts the file called "reversed-order.txt",
    // and prints the decrypred text to the terminal window.

    getDecrypted(R"(../my-file.txt)");

    return 0;
}

void getDecrypted(std::string file){

    std::string aLine;
    std::ifstream myFile(file);
    std::vector <std::string> v;
    int lines = 0;
    try{
        if(myFile.is_open()){
            while (!myFile.eof()){
                getline(myFile, aLine);
                v.push_back(aLine);
                lines++;
            }
            for (int i = 0; i < lines; ++i) {
                std::cout<<v[lines - i]<<std::endl;
            }
            myFile.close();
        }else
            throw -1;
    } catch (int e){
        std::cerr << "Error opening files!" << std::endl;
    }
}