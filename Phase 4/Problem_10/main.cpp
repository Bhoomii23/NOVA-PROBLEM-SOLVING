#include "Vehicle.h"

int main() {
    try {
        Engine e1(EngineType::PETROL, 2.0);
        Engine e2(EngineType::ELECTRIC, 1.5);

        TouristVehicle tv("Toyota", "Innova", 2023, 25000, e1, 7, "Automatic");
        PrivateVehicle pv("Honda", "Civic", 2022, 22000, e2, 4, "Manual");

        cout << "\nTourist Vehicle Details:\n";
        displayOutput(tv);

        cout << "\nPrivate Vehicle Details:\n";
        displayOutput(pv);

        // Invalid object to trigger an exception
        TouristVehicle tv_invalid("Ford", "EcoSport", 1870, -30000, e1, 5, "Manual");
    }
    catch (const invalid_argument& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
