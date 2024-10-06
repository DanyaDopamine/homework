#include "Student.h"
#include <iostream>
#include <ctime>

// Конструктор
Student::Student(std::string name, tm birthDate, std::string group, int studentId, float averageScore)
    : name(name), birthDate(birthDate), group(group), studentId(studentId), averageScore(averageScore) {}

// Методы для получения и установки значений полей
void Student::setName(std::string name) {
    this->name = name;
}

std::string Student::getName() {
    return name;
}

void Student::setBirthDate(tm birthDate) {
    this->birthDate = birthDate;
}

tm Student::getBirthDate() {
    return birthDate;
}

void Student::setGroup(std::string group) {
    this->group = group;
}

std::string Student::getGroup() {
    return group;
}

void Student::setStudentId(int studentId) {
    this->studentId = studentId;
}

int Student::getStudentId() {
    return studentId;
}

void Student::setAverageScore(float averageScore) {
    this->averageScore = averageScore;
}

float Student::getAverageScore() {
    return averageScore;
}

// Метод для вычисления возраста студента
int Student::getAge() {
    time_t now;
    time(&now);
    tm* currentTime = localtime(&now);
    int currentYear = currentTime->tm_year + 1900;
    int birthYear = birthDate.tm_year + 1900;
    return currentYear - birthYear;
}

// Метод для проверки, является ли студент отличником
bool Student::isExcellentStudent() {
    return averageScore >= 4.8;
}

// Метод для вывода информации о студенте
void Student::toString() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Birth Date: " << asctime(&birthDate);
    std::cout << "Group: " << group << std::endl;
    std::cout << "Student ID: " << studentId << std::endl;
    std::cout << "Average Score: " << averageScore << std::endl;
}

