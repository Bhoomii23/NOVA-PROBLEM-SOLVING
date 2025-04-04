#include <iostream>
#include "area.h"

int main() {
    double radius, length, breadth, base, height;

    std::cout << "Enter radius of the circle: ";
    std::cin >> radius;
    std::cout << "Area of Circle: " << calculateArea(radius) << std::endl;

    std::cout << "\nEnter length and breadth of the rectangle: ";
    std::cin >> length >> breadth;
    std::cout << "Area of Rectangle: " << calculateArea(length, breadth) << std::endl;

    std::cout << "\nEnter base and height of the triangle: ";
    std::cin >> base >> height;
    std::cout << "Area of Triangle: " << calculateArea(base, height, true) << std::endl;

    return 0;
}
