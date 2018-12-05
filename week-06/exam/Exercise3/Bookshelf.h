#ifndef EXERCISE3_BOOKSHELF_H
#define EXERCISE3_BOOKSHELF_H

#include "Books.h"
#include <vector>

class Bookshelf {
public:
    void addBook(Books *book);
    void lightestBook();
    void mostPages();

private:
    std::vector <Books*> _books;
};


#endif //EXERCISE3_BOOKSHELF_H
