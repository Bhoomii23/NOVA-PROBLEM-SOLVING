#include "ElectricVehicle.h"

ElectricVehicle::ElectricVehicle(int id, std::string mk, std::string mdl, double capacity, double charge)
    : vehicleId(id), make(mk), model(mdl), batteryCapacity(capacity), chargeLevel(charge) {
    if (batteryCapacity <= 0 || chargeLevel < 0 || chargeLevel > batteryCapacity) {
        throw std::invalid_argument("Invalid battery capacity or charge level.");
    }
}

void ElectricVehicle::charge(double hours) {
    try {
        if (hours <= 0) throw std::invalid_argument("Charging time must be positive.");
        double chargeAdded = hours * 10; 
        chargeLevel += chargeAdded;
        if (chargeLevel > batteryCapacity) chargeLevel = batteryCapacity;
    } catch (const std::exception& e) {
        std::cerr << "Charge Error: " << e.what() << std::endl;
    }
}

void ElectricVehicle::drive(double miles) {
    try {
        if (miles <= 0) throw std::invalid_argument("Driving distance must be positive.");
        double batteryConsumption = miles * 0.2; 
        if (chargeLevel < batteryConsumption) throw std::runtime_error("Insufficient charge.");
        chargeLevel -= batteryConsumption;
    } catch (const std::exception& e) {
        std::cerr << "Drive Error: " << e.what() << std::endl;
    }
}

void ElectricVehicle::displayVehicleDetails() const {
    std::cout << "Vehicle ID: " << vehicleId << "\nMake: " << make
              << "\nModel: " << model << "\nBattery Capacity: " << batteryCapacity
              << " kWh\nCharge Level: " << chargeLevel << " kWh\n\n";
}
