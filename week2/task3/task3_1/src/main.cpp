#include <iostream>
#include "Author.hpp"
#include "Book.hpp"

int main() {
    Author author("Джек Лондон", 1876);
    Book book(author);

    book.displayInfo();

    return 0;
}

