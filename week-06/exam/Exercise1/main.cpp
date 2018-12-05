#include <iostream>

int main() {

    int x = 3;
    int array1 [3][3] = {{-1, 0, 3},
                         {-5, 22, 0},
                         {4, -3, -2}
    };

    int array2 [3][3] = {{-3, -5, 4},
                         {7, 0, -4},
                         {-2, -6, 0}

    };
    int newMatrix [3][3];

    for (int i = 0; i <x ; ++i) {
        for (int j=0; j<x; ++j){
            if (array1 [i] [j] > array2 [i] [j]){
                newMatrix [i] [j] = array1[i] [j];
            }else{
                newMatrix [i] [j] = array2 [i] [j];
            }
        }
    }
    std::cout<<"The new matrix's elements are: "<<std::endl;
    for (int k = 0; k < x; ++k) {
        for (int m = 0; m < x; ++m) {
            std::cout<<"newMatrix ["<<k<<"] ["<<m<<"] = "<<newMatrix [k][m]<<std::endl;
        }
    }
}
