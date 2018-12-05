#include <iostream>
#include "Bookshelf.h"
#include "Books.h"
#include "HardcoverBooks.h"
#include "PaperbackBooks.h"

int main() {

    HardcoverBooks voyageOfShackleton("Voyage of Shackleton", "Alfred Lansing", 1959, 222);
    HardcoverBooks terror("Terror", "Dan Simmons", 2016, 700);
    PaperbackBooks theOrderOfThePhoenix("The Order of the Phoenix", "Joanne Kathleen Rowling", 2003, 650);
    PaperbackBooks bandOfBrothers("Band of Brothers", "Stephen E. Ambrose", 1992, 336);

    Bookshelf upper;
    upper.addBook(&voyageOfShackleton);
    upper.addBook(&terror);
    upper.addBook(&theOrderOfThePhoenix);
    upper.addBook(&bandOfBrothers);

    std::cout<<"-------------------------------------------------------------"<<std::endl;
    upper.lightestBook();
    std::cout<<"-------------------------------------------------------------"<<std::endl;
    upper.mostPages();

    return 0;
}