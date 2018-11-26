#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void getDecrypted(std::string file);

int main() {
    // Create a program that decrypts the file called "reversed-lines.txt",
    // and prints the decrypted text to the terminal window.

getDecrypted(R"(../my-file.txt)");

    return 0;
}

void getDecrypted(std::string file){

    std::string aLine;
    std::ifstream myFile(file);
    std::vector <char> characters;
    try{
        if(myFile.is_open()){
            while(getline(myFile, aLine)){
                for (int i=aLine.length()-1; i>=0; i--)
                    std::cout << aLine[i];
                    std::cout<<std::endl;
                }
            myFile.close();
        }else
            throw -1;
    } catch (int e){
        std::cerr << "Error opening files!" << std::endl;
    }
}