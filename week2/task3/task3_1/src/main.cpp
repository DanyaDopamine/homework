#include <iostream>
#include "Author.h"
#include "Book.h"

int main() {
    Author author("Джек Лондон", 1876);
    Book book("Мартин Иден", author);

    std::cout << "Book Title: " << book.title << std::endl;
    std::cout << "Author: " << book.author.name << std::endl;
    std::cout << "Birth Year: " << book.author.birthYear << std::endl;

    return 0;
}
