#include "Vehicle.h"

Vehicle::Vehicle(int id, std::string mk, std::string mdl, double pr)
    : vehicleId(id), make(mk), model(mdl), price(pr) {
    if (id <= 0 || pr < 0) {
        throw std::invalid_argument("Invalid vehicle ID or price.");
    }
}

void Vehicle::displayDetails() const {
    std::cout << "Vehicle ID: " << vehicleId << "\nMake: " << make
              << "\nModel: " << model << "\nPrice: $" << price << std::endl;
}

double Vehicle::getPrice() const {
    return price;
}

int Vehicle::getVehicleId() const {
    return vehicleId;
}


Car::Car(int id, std::string mk, std::string mdl, double pr, std::string engType)
    : Vehicle(id, mk, mdl, pr), engineType(engType) {}

void Car::displayDetails() const {
    Vehicle::displayDetails();
    std::cout << "Engine Type: " << engineType << "\n" << std::endl;
}

double Car::getMileage() const {
    return 15.0;
}


Truck::Truck(int id, std::string mk, std::string mdl, double pr, double capacity)
    : Vehicle(id, mk, mdl, pr), payloadCapacity(capacity) {
    if (capacity < 0) {
        throw std::invalid_argument("Invalid payload capacity.");
    }
}

void Truck::displayDetails() const {
    Vehicle::displayDetails();
    std::cout << "Payload Capacity: " << payloadCapacity << " tons\n" << std::endl;
}

double Truck::getMileage() const {
    return 8.0;
}


void displayVehicleDetails(const std::vector<Vehicle*>& vehicles) {
    for (const auto& v : vehicles) {
        v->displayDetails();
    }
}

double calculateTotalMileage(const std::vector<Vehicle*>& vehicles) {
    double totalMileage = 0;
    for (const auto& v : vehicles) {
        totalMileage += v->getMileage();
    }
    return totalMileage;
}

void sortVehiclesByPrice(std::vector<Vehicle*>& vehicles) {
    std::sort(vehicles.begin(), vehicles.end(), [](Vehicle* a, Vehicle* b) {
        return a->getPrice() > b->getPrice();
    });
}

Vehicle* searchVehiclesByVehicleId(const std::vector<Vehicle*>& vehicles, int searchId) {
    for (const auto& v : vehicles) {
        if (v->getVehicleId() == searchId) {
            return v;
        }
    }
    return nullptr;
}
