#include <iostream>
#include <bits/stdc++.h>

namespace Triangle
{
  bool isTriangle(int a, int b, int c)
  {
      if(a>0 && b>0 && c>0){
          int array[3];
          array[0] = a;
          array[1] = b;
          array[2] = c;

          std::sort(array, array+3);

          for (int i = 0; i < 3; i++) {
              std::cout<<i <<" "<<array[i]<<std::endl;
          }

          std::cout<<"true"<<std::endl;
          return array[2] < array[0] + array[1];
      }else{
          std::cout<<"false"<<std::endl;
          return false;
      }
  }
};

int main() {
    Triangle::isTriangle(1, 5, 10);
    return 0;
}