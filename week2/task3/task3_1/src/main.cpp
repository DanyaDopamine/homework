#include <iostream>
#include "author.h"
#include "book.h"

int main() {
    Author author("John Smith", 1980);
    Book book("Sample Book", author);

    std::cout << "Book Title: " << book.getTitle() << std::endl;
    std::cout << "Author: " << book.getAuthorName() << std::endl;
    std::cout << "Author's Birth Year: " << book.getAuthorBirthYear() << std::endl;

    book.setAuthorInfo("Jane Doe", 1990);
    std::cout << "\nUpdated Author Information:\n";
    std::cout << "Author: " << book.getAuthorName() << std::endl;
    std::cout << "Author's Birth Year: " << book.getAuthorBirthYear() << std::endl;

    return 0;
}
