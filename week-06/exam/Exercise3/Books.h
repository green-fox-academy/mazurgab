#ifndef EXERCISE3_BOOKS_H
#define EXERCISE3_BOOKS_H

#include <iostream>


class Books {
public:
    Books(const std::string &title, const std::string &author, int releaseYear, int pageNumber);

    virtual int getWeight() = 0;
    std::string organizeBooks();
    int getPageNumber() const;

protected:
    std::string _title;
    std::string _author;
    int _releaseYear;
    int _pageNumber;
    int _weight;


};


#endif //EXERCISE3_BOOKS_H
