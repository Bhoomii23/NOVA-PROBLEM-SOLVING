#include <iostream>
#include "char_ops.h"

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);

    toUpperCase(str);
    removeVowels(str);
    reverseString(str);

    std::cout << "Modified string: " << str << std::endl;

    return 0;
}
