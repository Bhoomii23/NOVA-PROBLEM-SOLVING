#include "vehicle.h"

int main() {
    Car car1(101, "Honda", "Civic", 20000, 18, "Petrol");
    Car car2(102, "Toyota", "Corolla", 22000, 19, "Diesel");

    Truck truck1(201, "Tata", "Ultra", 35000, 10, 5.5);
    Truck truck2(202, "Ashok Leyland", "Dost", 33000, 11, 6);
    Truck truck3(203, "Mahindra", "Bolero Pickup", 32000, 12, 4.5);

    Vehicle* vehicles[] = { &car1, &car2, &truck1, &truck2, &truck3 };

    cout << "Displaying all vehicle details:\n";
    displayVehicleDetails(vehicles, 5);

    cout << "\nTotal mileage of all vehicles: " << calculateTotalMileage(vehicles, 5) << endl;

    cout << "\nSorting vehicles by price (descending):\n";
    sortVehiclesByPrice(vehicles, 5);
    displayVehicleDetails(vehicles, 5);

    cout << "\nSearching vehicle with Vehicle ID 202:\n";
    searchVehiclesByvehicleId(vehicles, 5, 202);

    cout << "\nSearching vehicle with Vehicle ID 999 (not present):\n";
    searchVehiclesByvehicleId(vehicles, 5, 999);

    return 0;
}
