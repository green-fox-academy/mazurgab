#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    const int rows = 4;
    const int columns = 3;

    int matrix [rows][columns] = {};

    for (int i=0 ; i< rows; i++)
    {
        for (int j=0; j< columns; j++)
        {
            if(i == j){
                matrix[i][j] = 1;
                std::cout<<" "<<matrix[i][j]<<" ";
            }else{
                matrix[i][j] = 0;
                std::cout<<" "<<matrix[i][j]<<" ";
            }
        }
        std::cout<<"\n";
    }

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    return 0;
}