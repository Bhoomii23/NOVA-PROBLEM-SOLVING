#include "transport.h"

Vehicle::Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}

void Vehicle::displayDetails() {
    cout << "Make: " << make << "\nModel: " << model << "\nYear: " << year << endl;
}

Car::Car(string mk, string mdl, int yr, int doors) : Vehicle(mk, mdl, yr), numberOfDoors(doors) {}

void Car::displayCarDetails() {
    cout << "Number of Doors: " << numberOfDoors << endl;
}

Truck::Truck(string mk, string mdl, int yr, double loadCap) : Vehicle(mk, mdl, yr), loadCapacity(loadCap) {}

void Truck::displayTruckDetails() {
    cout << "Load Capacity: " << loadCapacity << " tons" << endl;
}

Electric::Electric(double batteryCap, double chargeLvl) : batteryCapacity(batteryCap), chargeLevel(chargeLvl) {}

void Electric::displayElectricDetails() {
    cout << "Battery Capacity: " << batteryCapacity << " kWh\nCharge Level: " << chargeLevel << "%" << endl;
}

ElectricCar::ElectricCar(string mk, string mdl, int yr, int doors, double batteryCap, double chargeLvl, string eco)
    : Vehicle(mk, mdl, yr), Car(mk, mdl, yr, doors), Electric(batteryCap, chargeLvl), ecoMode(eco) {}

void ElectricCar::displayAllDetails() {
    Vehicle::displayDetails();
    displayCarDetails();
    Electric::displayElectricDetails();
    cout << "Eco Mode: " << ecoMode << endl;
}

ElectricTruck::ElectricTruck(string mk, string mdl, int yr, double loadCap, double batteryCap, double chargeLvl, double rng)
    : Vehicle(mk, mdl, yr), Truck(mk, mdl, yr, loadCap), Electric(batteryCap, chargeLvl), range(rng) {}

void ElectricTruck::displayAllDetails() {
    Vehicle::displayDetails();
    displayTruckDetails();
    Electric::displayElectricDetails();
    cout << "Range: " << range << " km" << endl;
}
