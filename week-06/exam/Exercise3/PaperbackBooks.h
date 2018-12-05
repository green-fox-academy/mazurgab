#ifndef EXERCISE3_PAPERBACKBOOKS_H
#define EXERCISE3_PAPERBACKBOOKS_H

#include "Books.h"

class PaperbackBooks : public Books{
public:
    PaperbackBooks(const std::string &title, const std::string &author, int releaseYear, int pageNumber);

    int getWeight() override;

};


#endif //EXERCISE3_PAPERBACKBOOKS_H
