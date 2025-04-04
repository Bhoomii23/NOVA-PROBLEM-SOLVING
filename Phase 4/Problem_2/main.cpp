#include "swap.h"

int main() {
    try {
        int num1, num2;

        std::cout << "Enter two integers: ";
        if (!(std::cin >> num1 >> num2)) {
            throw std::runtime_error("Invalid input. Please enter integers only.");
        }

        std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
        Swapper::swapValues(num1, num2);
        std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}
