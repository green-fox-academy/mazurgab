#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

std::vector <std::string> getIP(std::string file);

void getRatio(std::string file);

int main() {

    getIP(R"(../log.txt)");
    getRatio(R"(../log.txt)");

    return 0;
}
std::vector <std::string> getIP(std::string file){
std::ifstream myFile(file);
std::vector <std::string> IPs;
std::string garbage;
std::string IP;

    if (myFile.is_open()){
        if( myFile.peek() == std::ifstream::traits_type::eof() ) {
            std::cout<<"The file is empty"<<std::endl;
        }else {
            while (getline(myFile, garbage)) {
                myFile >> garbage >> garbage >> garbage >> garbage >> garbage >> IP >> garbage;
                if (std::find(IPs.begin(), IPs.end(), IP) == IPs.end()) {
                    IPs.push_back(IP);
                    std::cout << IP << std::endl;
                }
            }
        }
    }else{
        std::cout<<"Error opening file"<<std::endl;
    }
    myFile.close();
    return IPs;
}

void getRatio(std::string file){

    std::ifstream myFile(file);
    std::string garbage;
    std::string GP;
    float G = 0;
    float P = 0;

    if (myFile.is_open()){
        if( myFile.peek() == std::ifstream::traits_type::eof() ) {
            std::cout<<"The file is empty"<<std::endl;
        }else {
            while (getline(myFile, garbage)) {
                myFile >> garbage >> garbage >> garbage >> garbage >> garbage >> garbage >> GP;
                if (GP == "GET"){
                    G++;
                }else if(GP == "POST"){
                    P++;
                }
            }
        }
    }
    std::cout<<"The get/post ratio is: "<< G/P << std::endl;
}