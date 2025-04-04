#include "transport.h"

int main() {
    cout << "---- Electric Car Details ----" << endl;
    ElectricCar eCar("Tesla", "Model X", 2023, 4, 100, 90, "Active");
    eCar.displayAllDetails();

    cout << "\n---- Electric Truck Details ----" << endl;
    ElectricTruck eTruck("Volvo", "FH Electric", 2022, 20.0, 300, 80, 400);
    eTruck.displayAllDetails();

    return 0;
}
