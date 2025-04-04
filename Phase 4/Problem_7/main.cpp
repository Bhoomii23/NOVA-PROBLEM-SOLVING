#include "Vehicle.h"

int main() {
    try {
        std::vector<Vehicle*> vehicles;

        Car car1(101, "Tesla", "Model S", 79999.99, "Electric");
        Car car2(102, "Toyota", "Camry", 24999.99, "Petrol");
        Truck truck1(103, "Ford", "F-150", 45999.99, 2.5);
        Truck truck2(104, "Volvo", "FH16", 98999.99, 10.0);
        Truck truck3(105, "Mercedes", "Actros", 129999.99, 15.0);

        vehicles.push_back(&car1);
        vehicles.push_back(&car2);
        vehicles.push_back(&truck1);
        vehicles.push_back(&truck2);
        vehicles.push_back(&truck3);

        std::cout << "---- Vehicle Details ----\n";
        displayVehicleDetails(vehicles);

        std::cout << "Total Mileage: " << calculateTotalMileage(vehicles) << " MPG\n\n";

        std::cout << "Sorting vehicles by price...\n";
        sortVehiclesByPrice(vehicles);
        displayVehicleDetails(vehicles);

        int searchId = 104;
        Vehicle* foundVehicle = searchVehiclesByVehicleId(vehicles, searchId);
        if (foundVehicle) {
            std::cout << "\nVehicle found:\n";
            foundVehicle->displayDetails();
        } else {
            std::cout << "\nVehicle ID " << searchId << " not found.\n";
        }

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}
