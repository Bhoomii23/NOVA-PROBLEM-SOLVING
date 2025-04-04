#include "Vehicle.h"
#include <algorithm>
#include <exception>

Vehicle::Vehicle(int id, std::string mk, std::string mdl, double pr) : vehicleId(id), make(mk), model(mdl), price(pr) {}

void Vehicle::displayDetails() const {
    std::cout << "Vehicle ID: " << vehicleId << ", Make: " << make << ", Model: " << model << ", Price: $" << price << std::endl;
}

int Vehicle::getVehicleId() const { return vehicleId; }
double Vehicle::getPrice() const { return price; }

Car::Car(int id, std::string mk, std::string mdl, double pr, std::string eng) : Vehicle(id, mk, mdl, pr), engineType(eng) {}

void Car::displayDetails() const {
    Vehicle::displayDetails();
    std::cout << "Engine Type: " << engineType << std::endl;
}

Truck::Truck(int id, std::string mk, std::string mdl, double pr, double capacity) : Vehicle(id, mk, mdl, pr), payloadCapacity(capacity) {}

void Truck::displayDetails() const {
    Vehicle::displayDetails();
    std::cout << "Payload Capacity: " << payloadCapacity << " tons" << std::endl;
}

void displayVehicleDetails(const std::vector<Vehicle*>& vehicles) {
    for (const auto& vehicle : vehicles) {
        try {
            if (!vehicle) throw std::runtime_error("Null Vehicle Pointer");
            vehicle->displayDetails();
        } catch (const std::exception& e) {
            std::cerr << "Error displaying vehicle details: " << e.what() << std::endl;
        }
    }
}

void sortVehiclesByPrice(std::vector<Vehicle*>& vehicles) {
    std::sort(vehicles.begin(), vehicles.end(), [](Vehicle* a, Vehicle* b) {
        return a->getPrice() > b->getPrice();
    });
}

Vehicle* searchVehicleById(const std::vector<Vehicle*>& vehicles, int id) {
    for (auto vehicle : vehicles) {
        if (vehicle->getVehicleId() == id) {
            return vehicle;
        }
    }
    return nullptr;
}
