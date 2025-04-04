#include "Vehicle.h"

int main() {
    std::vector<Vehicle*> vehicles;

    try {
        vehicles.push_back(new Car(101, "Toyota", "Corolla", 20000, "Petrol"));
        vehicles.push_back(new Car(102, "Honda", "Civic", 22000, "Diesel"));
        vehicles.push_back(new Truck(201, "Ford", "F-150", 30000, 1.5));
        vehicles.push_back(new Truck(202, "Volvo", "FH16", 60000, 5.0));

        std::cout << "Before Sorting: " << std::endl;
        displayVehicleDetails(vehicles);

        sortVehiclesByPrice(vehicles);

        std::cout << "\nAfter Sorting by Price: " << std::endl;
        displayVehicleDetails(vehicles);

        int searchId = 102;
        Vehicle* found = searchVehicleById(vehicles, searchId);
        if (found) {
            std::cout << "\nVehicle Found:\n";
            found->displayDetails();
        } else {
            std::cout << "\nVehicle ID " << searchId << " not found.\n";
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    for (auto v : vehicles) delete v;
    return 0;
}
