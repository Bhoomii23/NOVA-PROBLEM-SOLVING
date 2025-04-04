#include <iostream>
#include "ElectricVehicle.h"
using namespace std;

ElectricVehicle::ElectricVehicle(int vId, string mk, string mdl, double bCap, double cLevel) {
    vehicleId = vId;
    make = mk;
    model = mdl;
    batteryCapacity = bCap;
    chargeLevel = cLevel;
}

void ElectricVehicle::charge(double hours) {
    double chargingRate = 10.0; // assume 10% per hour
    chargeLevel += chargingRate * hours;
    if (chargeLevel > 100.0) chargeLevel = 100.0;
    cout << make << " " << model << " charged for " << hours << " hours." << endl;
}

void ElectricVehicle::drive(double miles) {
    double consumptionRate = 0.2; // assume 0.2% battery consumption per mile
    double consumed = miles * consumptionRate;
    if (consumed > chargeLevel) {
        cout << "Not enough charge to drive " << miles << " miles!" << endl;
    } else {
        chargeLevel -= consumed;
        cout << make << " " << model << " driven for " << miles << " miles." << endl;
    }
}

void ElectricVehicle::displayVehicleDetails() {
    cout << "Vehicle ID: " << vehicleId << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    cout << "Current Charge Level: " << chargeLevel << "%" << endl;
    cout << "-------------------------------" << endl;
}
