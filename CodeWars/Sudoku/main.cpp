#include <iostream>
#include <map>

bool validSolution(unsigned int board[9][9]);

int main() {
    unsigned int example1[9][9] = {{5, 3, 4, 6, 7, 8, 9, 1, 2},
                                   {6, 7, 2, 1, 9, 5, 3, 4, 8},
                                   {1, 9, 8, 3, 4, 2, 5, 6, 7},
                                   {8, 5, 9, 7, 6, 1, 4, 2, 3},
                                   {4, 2, 6, 8, 5, 3, 7, 9, 1},
                                   {7, 1, 3, 9, 2, 4, 8, 5, 6},
                                   {9, 6, 1, 5, 3, 7, 2, 8, 4},
                                   {2, 8, 7, 4, 1, 9, 6, 3, 5},
                                   {3, 4, 5, 2, 8, 6, 1, 7, 9}};

    unsigned int example2[9][9] = {{5, 3, 4, 6, 7, 8, 9, 1, 2},
                                   {6, 7, 2, 1, 9, 0, 3, 4, 8},
                                   {1, 0, 0, 3, 4, 2, 5, 6, 0},
                                   {8, 5, 9, 7, 6, 1, 0, 2, 0},
                                   {4, 2, 6, 8, 5, 3, 7, 9, 1},
                                   {7, 1, 3, 9, 2, 4, 8, 5, 6},
                                   {9, 0, 1, 5, 3, 7, 2, 1, 4},
                                   {2, 8, 7, 4, 1, 9, 6, 3, 5},
                                   {3, 0, 0, 4, 8, 1, 1, 7, 9}};
    std::cout<<validSolution(example1)<<std::endl;
    return 0;
}

/*bool validSolution(unsigned int board[9][9]){

    std::map<int, int> occurence;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if(board[i][j] < 1 || board[i][j] > 9){
                return false;
            }

            if(occurence.find(board[i][j]) == occurence.end()){
                occurence.insert(std::pair<int, int>(board[i][j], 1));
            }else{
                occurence[board[i][j]]++;
            }
        }
        int counter = 0;
        for(auto it = occurence.cbegin(); it != occurence.cend(); ++it ){
            if (it ->second != 1) {
                counter++;
            }
        }
        if(counter > 0){
            return false;
        }
        occurence.erase(occurence.begin(), occurence.end());
    }
}*/

bool validSolution(unsigned int board[9][9]){
    int sumA = 0;
    int sumB = 0;
    int sumC = 0;
    double multipleA = 1;
    double multipleB = 1;
    double multipleC = 1;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if(board[i][j] < 1 || board[i][j] > 9){
                return false;
            }
            sumA += board[i][j];
            sumB += board[j][i];
            multipleA *= board[i][j];
            multipleB *= board[j][i];

            if(i%3 == 0 && j%3 == 0){
                for (int k = 0; k <3 ; ++k) {
                    for (int l = 0; l < 3; ++l) {
                        sumC += board[i + k][j + l];
                        multipleC *= board[i + k][j + l];
                    }
                }
                if(sumC != 45 || multipleC != 362880){
                    return false;
                }
                sumC = 0;
                multipleC = 1;
            }
        }
        if(sumA != 45 || sumB != 45 || multipleA != 362880 || multipleB != 362880){
            return false;
        }
        sumA = 0;
        sumB = 0;
        multipleA = 1;
        multipleB = 1;
    }
    return true;
}