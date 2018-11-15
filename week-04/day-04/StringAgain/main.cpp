// Given a string, compute recursively a new string where all the 'x' chars have been removed.

#include <iostream>
#include <string>

std::string ChangeChar(std::string &str, int pos);

int main() {

    std::string str ="xixo";
    std::cout<<ChangeChar(str, 0)<<std::endl;

    return 0;
}

std::string ChangeChar(std::string &str, int pos){


    if (pos < str.size()){
        if (str[pos] == 'x')
            str[pos] = ' ';
        return ChangeChar(str, pos + 1);
    }else{
        return str;
    }

}