#include "PaperbackBooks.h"

PaperbackBooks::PaperbackBooks(const std::string &title, const std::string &author, int releaseYear, int pageNumber)
        : Books(title, author, releaseYear, pageNumber) {}

int PaperbackBooks::getWeight() {
    _weight = 20 + (_pageNumber * 10);
    return _weight;
}
