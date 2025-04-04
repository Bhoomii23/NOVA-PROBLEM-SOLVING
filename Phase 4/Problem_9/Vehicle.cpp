#include "Vehicle.h"

void Vehicle::displayDetails() const {
    cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
}

void Car::displayDetails() const {
    cout << "Car - ";
    Vehicle::displayDetails();
}

void Truck::displayDetails() const {
    cout << "Truck - ";
    Vehicle::displayDetails();
}

Electric::Electric(double bc, double cl) {
    if (bc <= 0 || cl < 0 || cl > bc) throw invalid_argument("Invalid battery values!");
    batteryCapacity = bc;
    chargeLevel = cl;
}

void Electric::displayElectricDetails() const {
    cout << "Battery Capacity: " << batteryCapacity << " kWh, Charge Level: " << chargeLevel << "%" << endl;
}

ElectricCar::ElectricCar(string m, string mo, int y, double bc, double cl) 
    : Car(m, mo, y), Electric(bc, cl), Vehicle(m, mo, y) {}

void ElectricCar::displayDetails() const {
    Car::displayDetails();
    displayElectricDetails();
}

ElectricTruck::ElectricTruck(string m, string mo, int y, double bc, double cl) 
    : Truck(m, mo, y), Electric(bc, cl), Vehicle(m, mo, y) {}

void ElectricTruck::displayDetails() const {
    Truck::displayDetails();
    displayElectricDetails();
}
