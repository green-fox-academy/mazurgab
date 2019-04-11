#include <iostream>
#include <string>

using namespace std;

string rot13(string msg);

int main() {
    rot13("mM");
    return 0;
}

string rot13(string msg)
{
    int j = 0;

    for (int i = 0; i < msg.length(); ++i) {
        if(isalpha(msg[i])){
            if(((int)msg[i] > 77 && (int)msg[i] <= 90) || ((int)msg[i] > 109 && (int)msg[i] <= 122) ){
                j = (int)msg[i] - 13;
            }else{
                j = (int)msg[i] + 13;
            }
            msg[i] = char(j);
        }
    }
    for (int k = 0; k < msg.length(); ++k) {
        std::cout<<" new: "<<msg[k]<<std::endl;
    }
    return msg;
}
