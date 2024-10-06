#ifndef OCTAGON_H
#define OCTAGON_H

class Octagon {
private:
    double innerRadius;

public:
    Octagon(); // Конструктор по умолчанию
    Octagon(double radius); // Конструктор с параметром

    void setInnerRadius(double radius);
    double getInnerRadius();
    double calculateArea();
    double calculatePerimeter();
};

#endif // OCTAGON_H
	
