#include <iostream>
#include "battery.h"
using namespace std;

int main() {
    Battery b1, b2(5000, 80, 3.7, 30);

    cin >> b1;
    cout << "\nBattery 1 details:\n" << b1;
    cout << "\nBattery 2 details:\n" << b2;

    b1[0] = 0.9; 
    b1[1] = 0.7; 
    b1[2] = 32;  

    cout << "\nBattery 1 state using dereference operator: " << *b1 << endl;

    b1->charge();
    b1->discharge();

    cout << "\nPre-incrementing Battery 1: " << endl;
    ++b1;
    cout << b1;

    cout << "Pre-decrementing Battery 2: " << endl;
    --b2;
    cout << b2;

    cout << "Assigning Battery 1 = Battery 2\n";
    b1 = b2;
    cout << b1;

    return 0;
}
