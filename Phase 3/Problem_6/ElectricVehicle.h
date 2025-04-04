#ifndef ELECTRIC_VEHICLE_H
#define ELECTRIC_VEHICLE_H

#include <string>
using namespace std;

class ElectricVehicle {
private:
    int vehicleId;
    string make;
    string model;
    double batteryCapacity;
    double chargeLevel;

public:
    ElectricVehicle(int vId, string mk, string mdl, double bCap, double cLevel);

    void charge(double hours);
    void drive(double miles);
    void displayVehicleDetails();
};

#endif
