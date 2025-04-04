#include "Battery.h"

int main() {
    try {
        Battery b1(100, 50, 3.7, 25);
        std::cout << b1 << std::endl;

        ++b1;
        std::cout << "After increment: " << b1 << std::endl;

        --b1;
        std::cout << "After decrement: " << b1 << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
