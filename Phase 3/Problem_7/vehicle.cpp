#include "vehicle.h"

Vehicle::Vehicle(int id, string mk, string mdl, double prc, double mlg)
    : vehicleId(id), make(mk), model(mdl), price(prc), mileage(mlg) {}

void Vehicle::displayDetails() {
    cout << "Vehicle ID: " << vehicleId << "\nMake: " << make << "\nModel: " << model << "\nPrice: " << price << "\nMileage: " << mileage << endl;
}

double Vehicle::getPrice() {
    return price;
}

int Vehicle::getVehicleId() {
    return vehicleId;
}

double Vehicle::getMileage() {
    return mileage;
}

Car::Car(int id, string mk, string mdl, double prc, double mlg, string eng)
    : Vehicle(id, mk, mdl, prc, mlg), engineType(eng) {}

void Car::displayDetails() {
    Vehicle::displayDetails();
    cout << "Engine Type: " << engineType << endl;
}

Truck::Truck(int id, string mk, string mdl, double prc, double mlg, double payload)
    : Vehicle(id, mk, mdl, prc, mlg), payloadCapacity(payload) {}

void Truck::displayDetails() {
    Vehicle::displayDetails();
    cout << "Payload Capacity: " << payloadCapacity << " tons" << endl;
}

void displayVehicleDetails(Vehicle* vehicles[], int size) {
    for (int i = 0; i < size; i++) {
        vehicles[i]->displayDetails();
        cout << "-----------------------------" << endl;
    }
}

double calculateTotalMileage(Vehicle* vehicles[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += vehicles[i]->getMileage();
    }
    return total;
}

void sortVehiclesByPrice(Vehicle* vehicles[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (vehicles[i]->getPrice() < vehicles[j]->getPrice()) {
                swap(vehicles[i], vehicles[j]);
            }
        }
    }
}

void searchVehiclesByvehicleId(Vehicle* vehicles[], int size, int id) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (vehicles[i]->getVehicleId() == id) {
            cout << "Vehicle Found:" << endl;
            vehicles[i]->displayDetails();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Vehicle with ID " << id << " not found." << endl;
    }
}
