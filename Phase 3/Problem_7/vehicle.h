#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    int vehicleId;
    string make;
    string model;
    double price;
    double mileage;
public:
    Vehicle(int id, string mk, string mdl, double prc, double mlg);
    virtual void displayDetails();
    double getPrice();
    int getVehicleId();
    double getMileage();
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
private:
    string engineType;
public:
    Car(int id, string mk, string mdl, double prc, double mlg, string eng);
    void displayDetails() override;
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
public:
    Truck(int id, string mk, string mdl, double prc, double mlg, double payload);
    void displayDetails() override;
};

void displayVehicleDetails(Vehicle* vehicles[], int size);
double calculateTotalMileage(Vehicle* vehicles[], int size);
void sortVehiclesByPrice(Vehicle* vehicles[], int size);
void searchVehiclesByvehicleId(Vehicle* vehicles[], int size, int id);

#endif
