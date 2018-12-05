#ifndef EXERCISE3_HARDCOVERBOOKS_H
#define EXERCISE3_HARDCOVERBOOKS_H

#include "Books.h"

class HardcoverBooks : public Books {
public:
    HardcoverBooks(const std::string &title, const std::string &author, int releaseYear, int pageNumber);

    int getWeight() override;

};


#endif //EXERCISE3_HARDCOVERBOOKS_H
