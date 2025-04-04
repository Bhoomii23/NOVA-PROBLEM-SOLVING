#include "swap.h"

void Swapper::swapValues(int& a, int& b) {
    try {
        if (&a == &b) {
            throw std::invalid_argument("Both values reference the same memory location, swap is unnecessary.");
        }
        int temp = a;
        a = b;
        b = temp;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
