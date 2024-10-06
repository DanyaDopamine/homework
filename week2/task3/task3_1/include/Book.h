#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Author.h"

class Book {
public:
    std::string title;
    Author author;

    Book(const std::string& bookTitle, const Author& bookAuthor);
};

#endif // BOOK_H
