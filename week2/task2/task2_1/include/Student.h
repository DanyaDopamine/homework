#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <ctime>

class Student {
private:
    std::string name;
    tm birthDate; // Структура tm используется для хранения даты и времени
    std::string group;
    int studentId;
    float averageScore;

public:
    // Конструктор
    Student(std::string name, tm birthDate, std::string group, int studentId, float averageScore);

    // Методы для получения и установки значений полей
    void setName(std::string name);
    std::string getName();
    void setBirthDate(tm birthDate);
    tm getBirthDate();
    void setGroup(std::string group);
    std::string getGroup();
    void setStudentId(int studentId);
    int getStudentId();
    void setAverageScore(float averageScore);
    float getAverageScore();

    // Метод для вычисления возраста студента
    int getAge();

    // Метод для проверки, является ли студент отличником
    bool isExcellentStudent();

    // Метод для вывода информации о студенте
    void toString();
};

#endif // STUDENT_H
