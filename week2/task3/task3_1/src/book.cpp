#include "book.h"

Book::Book(std::string bookTitle, Author bookAuthor) : title(bookTitle), author(bookAuthor) {}

void Book::setAuthorInfo(std::string authorName, int yearOfBirth) {
    author.setName(authorName);
    author.setBirthYear(yearOfBirth);
}

std::string Book::getAuthorName() {
    return author.getName();
}

int Book::getAuthorBirthYear() {
    return author.getBirthYear();
}

std::string Book::getTitle() {
    return title;
}
