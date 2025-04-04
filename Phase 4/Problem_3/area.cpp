#include "area.h"

double AreaCalculator::calculateArea(double radius) {
    if (radius <= 0) {
        throw std::invalid_argument("Radius must be greater than zero.");
    }
    return M_PI * radius * radius;
}

double AreaCalculator::calculateArea(double length, double width) {
    if (length <= 0 || width <= 0) {
        throw std::invalid_argument("Length and width must be greater than zero.");
    }
    return length * width;
}

double AreaCalculator::calculateArea(double base, double height, bool isTriangle) {
    if (base <= 0 || height <= 0) {
        throw std::invalid_argument("Base and height must be greater than zero.");
    }
    return 0.5 * base * height;
}
