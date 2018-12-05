#include "HardcoverBooks.h"

HardcoverBooks::HardcoverBooks(const std::string &title, const std::string &author, int releaseYear, int pageNumber)
        : Books(title, author, releaseYear, pageNumber) {}

int HardcoverBooks::getWeight() {
    _weight = 100 + (_pageNumber * 10);
    return _weight;
}

