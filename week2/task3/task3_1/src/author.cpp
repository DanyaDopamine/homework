#include "author.h"

Author::Author(std::string authorName, int yearOfBirth) {
    name = authorName;
    birthYear = yearOfBirth;
}

void Author::setName(std::string authorName) {
    name = authorName;
}

void Author::setBirthYear(int yearOfBirth) {
    birthYear = yearOfBirth;
}

std::string Author::getName() {
    return name;
}

int Author::getBirthYear() {
    return birthYear;
}
