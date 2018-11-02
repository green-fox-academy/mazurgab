#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%%
    // %    %
    // %    %
    // %    %
    // %    %
    // %%%%%%
    //
    // The square should have as many lines as the number was


    int number;
    std::cout<<"Give an number: "<<std::endl;
    std::cin>>number;

    for (int i=1; i<number+1; i++){
        if (i==1 || i==number){
            for (int j=1; j<number+1; j++){
                std::cout<<"%";
            }
        }else{
            for (int k=1; k<number+1; k++){
                if(k==1 || k==number){
                    std::cout<<"%";
                }else{
                    std::cout<<" ";
                }


            }




        }



        std::cout<<std::endl;
    }

    return 0;
}