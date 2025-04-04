#include "Vehicle.h"

int main() {
    try {
        ElectricCar ec("Tesla", "Model S", 2023, 100.0, 80.0);
        ElectricTruck et("Rivian", "R1T", 2024, 120.0, 90.0);
        
        cout << "\nElectric Car Details:\n";
        ec.displayDetails();

        cout << "\nElectric Truck Details:\n";
        et.displayDetails();
        
        
        ElectricCar ec_invalid("BMW", "i4", 2022, -100.0, 50.0);  
    }
    catch (const invalid_argument& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}


