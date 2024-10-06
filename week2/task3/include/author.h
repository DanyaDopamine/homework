#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
private:
    std::string name;
    int birthYear;

public:
    Author(std::string authorName, int yearOfBirth);
    
    void setName(std::string authorName);
    void setBirthYear(int yearOfBirth);
    std::string getName();
    int getBirthYear();
};

#endif

