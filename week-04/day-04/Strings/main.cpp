#include <iostream>
#include <string>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

std::string ChangeChar(std::string &str, int pos);

int main() {

   std::string str ="xixo";
    std::cout<<ChangeChar(str, 0)<<std::endl;

    return 0;
}

std::string ChangeChar(std::string &str, int pos){


    if (pos < str.size()){
        if (str[pos] == 'x')
            str[pos] = 'y';
        return ChangeChar(str, pos + 1);
    }else{
        return str;
    }

}