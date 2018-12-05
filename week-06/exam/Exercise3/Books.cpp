#include "Books.h"

Books::Books(const std::string &title, const std::string &author, int releaseYear, int pageNumber) : _title(title),
                                                                                                     _author(author),
                                                                                                     _releaseYear(
                                                                                                             releaseYear),
                                                                                                     _pageNumber(
                                                                                                             pageNumber) {}

std::string Books::organizeBooks() {
    return "Title: " + _title + ", author: " + _author + ", release year: " + std::to_string(_releaseYear);
}

int Books::getPageNumber() const {
    return _pageNumber;
}
