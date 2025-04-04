#include "area.h"

int main() {
    try {
        int choice;
        std::cout << "Choose a shape to calculate area:\n";
        std::cout << "1. Circle\n2. Rectangle\n3. Triangle\n";
        std::cout << "Enter your choice: ";
        if (!(std::cin >> choice)) {
            throw std::runtime_error("Invalid input. Please enter a number.");
        }

        double result;
        switch (choice) {
            case 1: {
                double radius;
                std::cout << "Enter radius of the circle: ";
                if (!(std::cin >> radius)) {
                    throw std::runtime_error("Invalid input. Please enter a number.");
                }
                result = AreaCalculator::calculateArea(radius);
                break;
            }
            case 2: {
                double length, width;
                std::cout << "Enter length and width of the rectangle: ";
                if (!(std::cin >> length >> width)) {
                    throw std::runtime_error("Invalid input. Please enter numbers.");
                }
                result = AreaCalculator::calculateArea(length, width);
                break;
            }
            case 3: {
                double base, height;
                std::cout << "Enter base and height of the triangle: ";
                if (!(std::cin >> base >> height)) {
                    throw std::runtime_error("Invalid input. Please enter numbers.");
                }
                result = AreaCalculator::calculateArea(base, height, true);
                break;
            }
            default:
                throw std::out_of_range("Invalid choice. Please select 1, 2, or 3.");
        }

        if (result != -1) {
            std::cout << "The calculated area is: " << result << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}
