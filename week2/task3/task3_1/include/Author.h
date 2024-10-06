#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
public:
    std::string name;
    int birthYear;

    Author(const std::string& authorName, int year);
};

#endif // AUTHOR_H
