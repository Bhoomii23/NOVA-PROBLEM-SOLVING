#ifndef ELECTRIC_VEHICLE_H
#define ELECTRIC_VEHICLE_H

#include <iostream>
#include <stdexcept>
#include <string>

class ElectricVehicle {
private:
    int vehicleId;
    std::string make;
    std::string model;
    double batteryCapacity;
    double chargeLevel;

public:
    ElectricVehicle(int id, std::string mk, std::string mdl, double capacity, double charge);

    void charge(double hours);
    void drive(double miles);
    void displayVehicleDetails() const;
};

#endif // ELECTRIC_VEHICLE_H
