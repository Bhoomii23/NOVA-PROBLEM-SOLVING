#include "swap.h"

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
