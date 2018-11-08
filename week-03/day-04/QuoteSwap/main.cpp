#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

void quoteSwap(std::vector<std::string> v);

int main(int argc, char* args[])
{
    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};

    // Accidentally I messed up this quote from Richard Feynman.
    // Two words are out of place
    // Your task is to fix it by swapping the right words with code
    // Create a method called quoteSwap().

    // Also, print the sentence to the output with spaces in between.

    quoteSwap(quote);

    //std::iter_swap(quote.begin() + 2, quote.begin() + 5);

    //for (int i=0; i<8; ++i) {

    //    std::cout << quote[i]<<" ";

    //}


    return 0;
}

void quoteSwap(std:: vector<std::string> v){

    std::iter_swap(v.begin() + 2, v.begin() + 5); //std::swap(v[2], v[5]) also works

    for (int i=0; i<8; ++i){

        std::cout<<v[i]<<" ";
    }


}