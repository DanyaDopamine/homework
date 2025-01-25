#include "Math.hpp"

double heronSqrt(double x) {
    double guess = x;
    double epsilon = 0.00001;
    while (std::fabs(guess * guess - x) > epsilon) {
        guess = 0.5 * (guess + x / guess);
    }
    return guess;
}
