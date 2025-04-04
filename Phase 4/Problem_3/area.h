#ifndef AREA_H
#define AREA_H

#include <iostream>
#include <cmath>
#include <stdexcept>

class AreaCalculator {
public:
    static double calculateArea(double radius);                // Circle
    static double calculateArea(double length, double width);  // Rectangle
    static double calculateArea(double base, double height, bool isTriangle); // Triangle
};

#endif // AREA_H

