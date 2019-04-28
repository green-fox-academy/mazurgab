#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> snail(std::vector<std::vector<int>> array);

int main() {
    std::vector <std::vector<int>> array0 = {{}};
    std::vector <std::vector<int>> array1 = {{1}};
    std::vector <std::vector<int>> array2 = {{1,2}, {4,3}};
    std::vector <std::vector<int>> array3 = {{1,2,3}, {8,9,4}, {7,6,5}};
    std::vector <std::vector<int>> array4 = {{1,2,3,4}, {12,13,14,5}, {11,16,15,6}, {10,9,8,7}};
    std::vector <std::vector<int>> array5 = {{1,2,3,4,5}, {16,17,18,19,6}, {15,24,25,20,7}, {14,23,22,21,8}, {13,12,11,10,9}};
    for (const auto item : snail(array0)) {
        std::cout<<item<<std::endl;
    }
    return 0;
}

std::vector<int> snail(std::vector<std::vector<int>> array) {
    std::vector<int>sorted;

    static const auto empty = [] ( const auto& seq ) { return seq.empty() ; } ;

    if( std::all_of( std::begin(array), std::end(array), empty ) ){
        return {} ;
    }
    else if(array.size() == 1){
        sorted.push_back(array[0][0]);
        return sorted;
    }else{
        int counter = 0;
        for (int i = 0; i < array.size()/2 + 1; ++i) {
            if(array.size() - (2 * counter) == 1){
                sorted.push_back(array[counter][counter]);
                return sorted;
            }else if(array.size() - (2 * counter) == 2){
                sorted.push_back(array[counter][counter]);
                sorted.push_back(array[counter][counter+1]);
                sorted.push_back(array[counter+1][counter+1]);
                sorted.push_back(array[counter+1][counter]);
                return sorted;
            }else{
                std::cout<<"right"<<std::endl;
                //right
                for (int j = 0; j < array.size() - (2 * counter); ++j) {
                    sorted.push_back(array[counter][counter + j]);
                    std::cout<<array[counter][counter + j]<<std::endl;
                }
                std::cout<<"down"<<std::endl;
                //down
                for (int k = 0; k < array.size() - (2 * counter) - 1; ++k) {
                    sorted.push_back(array[counter + 1 + k][array.size() - counter - 1]);
                    std::cout<<array[counter + 1 + k][array.size() - counter - 1]<<std::endl;
                }
                std::cout<<"left"<<std::endl;
                //left
                for (int l = 0; l < array.size() - (2 * counter) - 1; ++l) {
                    sorted.push_back(array[array.size() - counter - 1][array.size() - counter - 2 - l]);
                    std::cout<<array[array.size() - counter - 1][array.size() - counter - 2 - l]<<std::endl;
                }
                std::cout<<"up"<<std::endl;
                //up
                for (int m = 0; m < array.size() - (2 * counter) - 2; ++m) {
                    sorted.push_back(array[array.size() - counter - 2 - m][counter]);
                    std::cout<<array[array.size() - counter - 2 - m][counter]<<std::endl;
                }
                counter++;
            }
        }
    }
    return sorted;
}