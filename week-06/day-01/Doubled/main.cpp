#include <iostream>
#include <string>
#include <vector>
#include <fstream>

void getSingle(std::string origFile, std::string newFile);

int main() {

    getSingle(R"(../doubled.txt)", R"(../single.txt)");

    return 0;
}

void getSingle(std::string origFile, std::string newFile){

    std::string aLine;
    std::ifstream read;
    std::ofstream write;
    read.open(origFile);
    write.open(newFile);

    try{
        if(read.is_open() && write.is_open()){
            while(getline(read, aLine)){
                const char * c = aLine.c_str();
                for (int i = 0; i <aLine.size() ; i += 2) {
                    write << c[i];
                }
                write<< std::endl;
            }
            std::cout << "Copying done!" << std::endl;
            write.close();
            read.close();
        } else
            throw -1;
    } catch (int e){
        std::cerr << "Error opening files!" << std::endl;
    }
}