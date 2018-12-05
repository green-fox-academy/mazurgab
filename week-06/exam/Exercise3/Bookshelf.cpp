#include "Bookshelf.h"

void Bookshelf::addBook(Books *book) {
    _books.push_back(book);
}

void Bookshelf::lightestBook() {
    int lightest = _books[0]->getWeight();
    int index2 = 0;
    for (int i = 0; i <_books.size() ; ++i) {
        if(_books[i]->getWeight() < lightest){
            lightest = _books[i]->getWeight();
            index2 = i;
        }
    }
    std::cout<< "The lightest book is: "<<_books[index2]->organizeBooks()<<std::endl;
    std::cout<< "The book's weight is: "<<lightest<<" grams."<<std::endl;
}

void Bookshelf::mostPages() {
    int mostPages = _books[0]->getPageNumber();
    int index = 0;
    for (int i = 0; i <_books.size() ; ++i) {
        if(_books[i]->getPageNumber() > mostPages){
            mostPages = _books[i]->getPageNumber();
            index = i;
        }
    }
    std::cout<<"The book with most pages is: "<<_books[index]->organizeBooks()<<std::endl;
    std::cout<<"It has "<<_books[index]->getPageNumber()<<" pages."<<std::endl;
}
