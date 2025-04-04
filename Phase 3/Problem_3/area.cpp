#include "area.h"
#define PI 3.14159

double calculateArea(double radius) {
    return PI * radius * radius;
}

double calculateArea(double length, double breadth) {
    return length * breadth;
}

double calculateArea(double base, double height, bool) {
    return 0.5 * base * height;
}
