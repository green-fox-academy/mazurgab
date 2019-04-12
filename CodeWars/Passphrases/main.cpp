#include <iostream>
#include <string>

class PlayPass
{
  public:
  static std::string playPass(const std::string &s, int n){

      std::string encoded {s};

      for (int i = 0; i < encoded.length(); ++i) {
          if(isalpha(encoded[i])){
              if((encoded[i] + n)>90){
                  std::cout<<i;
                  std::cout<<" orig: "<<s[i];
                  int cshift = (encoded[i] + n) - 90;
                  encoded[i] = char(cshift + 64);
                  //std::cout<<" new: "<<encoded[i]<<std::endl;
              }else{
                  std::cout<<i;
                  std::cout<<" orig: "<<s[i];
                  int shift = encoded[i] + n;
                  encoded[i] = char(shift);
                  //std::cout<<" new: "<<encoded[i]<<std::endl;
              }

              if(i%2 == 1){
                  encoded[i] = char(tolower(encoded[i]));
              }

              std::cout<<" new: "<<encoded[i]<<std::endl;
          }else if(isdigit(encoded[i])){
              std::cout<<i;
              std::cout<<" orig: "<<encoded[i];
              encoded[i] = char(105 - (int)encoded[i]);
              std::cout<<" new: "<<encoded[i]<<std::endl;
          }else{
              std::cout<<i;
              std::cout<<" orig: "<<s[i];
              std::cout<<" new: "<<encoded[i]<<std::endl;
          }
      }

      if(encoded.length()%2 == 1){
          for (int j = 0; j < encoded.length()/2 + 1; ++j) {
              std::swap(encoded[j], encoded[encoded.length()-j-1]);
          }
      }else if(encoded.length()%2 == 0){
          for (int j = 0; j < encoded.length()/2; ++j) {
              std::swap(encoded[j], encoded[encoded.length()-j-1]);
          }
      }

      for (int k = 0; k < encoded.length(); ++k) {
          std::cout<<encoded[k];
      }

      return encoded;
  }
};


int main() {
    PlayPass::playPass("AAABBCCY", 1);
    return 0;
}