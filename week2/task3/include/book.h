#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "author.h"

class Book {
private:
    std::string title;
    Author author;

public:
    Book(std::string bookTitle, Author bookAuthor);
    
    void setAuthorInfo(std::string authorName, int yearOfBirth);
    std::string getAuthorName();
    int getAuthorBirthYear();
    std::string getTitle();
};

#endif
