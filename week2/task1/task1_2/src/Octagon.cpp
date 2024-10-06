#include <iostream>
#include <cmath>
#include "Octagon.h"

Octagon::Octagon() : innerRadius(0) {}

Octagon::Octagon(double radius) : innerRadius(radius) {}

void Octagon::setInnerRadius(double radius) {
    innerRadius = radius;
}

double Octagon::getInnerRadius() {
    return innerRadius;
}

double Octagon::calculateArea() {
    return 2 * innerRadius * innerRadius * (1 + sqrt(2));
}

double Octagon::calculatePerimeter() {
    return 8 * innerRadius;
}
