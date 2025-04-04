#ifndef STRING_OPERATIONS_H
#define STRING_OPERATIONS_H

#include <iostream>
#include <cstring>
#include <cctype>
#include <stdexcept>

class StringProcessor {
public:
    static void toUpperCase(char* str);
    static void removeVowels(char* str);
    static void reverseString(char* str);
};

#endif // STRING_OPERATIONS_H
