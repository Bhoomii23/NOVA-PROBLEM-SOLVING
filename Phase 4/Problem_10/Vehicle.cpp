#include "Vehicle.h"

Engine::Engine(EngineType t, double c) {
    if (c <= 0) throw invalid_argument("Engine capacity must be positive.");
    type = t;
    capacity = c;
}

EngineType Engine::getType() const { return type; }
double Engine::getCapacity() const { return capacity; }

Vehicle::Vehicle(string m, string mo, int y, double p, Engine e) : make(m), model(mo), year(y), price(p), engine(e) {
    if (y < 1885 || y > 2025) throw invalid_argument("Invalid year! Cars were invented after 1885.");
    if (p <= 0) throw invalid_argument("Price must be positive.");
}

void Vehicle::printDetails() const {
    cout << "Make: " << make << ", Model: " << model << ", Year: " << year << ", Price: $" << price << endl;
    cout << "Engine: " << ((engine.getType() == EngineType::PETROL) ? "Petrol" :
                          (engine.getType() == EngineType::DIESEL) ? "Diesel" :
                          (engine.getType() == EngineType::ELECTRIC) ? "Electric" : "Hybrid")
         << ", Capacity: " << engine.getCapacity() << "L" << endl;
}

TouristVehicle::TouristVehicle(string m, string mo, int y, double p, Engine e, int s, string t) 
    : Vehicle(m, mo, y, p, e), seats(s), transmission(t) {
    if (s <= 0) throw invalid_argument("Seats must be a positive number.");
}

double TouristVehicle::calculateMileage() const {
    return 12.0 - (engine.getCapacity() * 0.5);  // Simplified mileage formula
}

void TouristVehicle::printDetails() const {
    Vehicle::printDetails();
    cout << "Seats: " << seats << ", Transmission: " << transmission << ", Mileage: " << calculateMileage() << " km/L" << endl;
}

PrivateVehicle::PrivateVehicle(string m, string mo, int y, double p, Engine e, int d, string t) 
    : Vehicle(m, mo, y, p, e), doors(d), transmission(t) {
    if (d <= 0) throw invalid_argument("Doors must be a positive number.");
}

double PrivateVehicle::calculateMileage() const {
    return 15.0 - (engine.getCapacity() * 0.3);  // Simplified mileage formula
}

void PrivateVehicle::printDetails() const {
    Vehicle::printDetails();
    cout << "Doors: " << doors << ", Transmission: " << transmission << ", Mileage: " << calculateMileage() << " km/L" << endl;
}

void displayOutput(const Vehicle& v) {
    v.printDetails();
}
