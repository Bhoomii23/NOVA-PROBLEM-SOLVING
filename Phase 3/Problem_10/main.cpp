#include "vehicle.h"
#include <vector>

int main() {
    vector<Vehicle*> vehicles;

    vehicles.push_back(new TouristVehicle("Toyota", "Innova", 2022, 2500000, Engine(DIESEL, 2.4), 7, "Automatic"));
    vehicles.push_back(new PrivateVehicle("Honda", "City", 2023, 1500000, Engine(PETROL, 1.5), 4, "Manual"));
    vehicles.push_back(new TouristVehicle("Mercedes", "Sprinter", 2021, 3500000, Engine(DIESEL, 3.0), 12, "Automatic"));
    vehicles.push_back(new PrivateVehicle("Tesla", "Model 3", 2024, 4000000, Engine(ELECTRIC, 0), 4, "Automatic"));

    double totalPrice = 0;
    for (const auto &v : vehicles) {
        displayOutput(*v);
        totalPrice += v->getPrice();
    }

    cout << "\nTotal price of all vehicles: " << totalPrice << endl;

    for (auto v : vehicles) delete v;

    return 0;
}
