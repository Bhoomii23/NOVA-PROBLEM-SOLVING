#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <algorithm>

class Vehicle {
protected:
    int vehicleId;
    std::string make;
    std::string model;
    double price;
public:
    Vehicle(int id, std::string mk, std::string mdl, double pr);

    virtual void displayDetails() const;
    virtual double getMileage() const = 0;
    double getPrice() const;
    int getVehicleId() const;

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
private:
    std::string engineType;
public:
    Car(int id, std::string mk, std::string mdl, double pr, std::string engType);

    void displayDetails() const override;
    double getMileage() const override;
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
public:
    Truck(int id, std::string mk, std::string mdl, double pr, double capacity);

    void displayDetails() const override;
    double getMileage() const override;
};

void displayVehicleDetails(const std::vector<Vehicle*>& vehicles);
double calculateTotalMileage(const std::vector<Vehicle*>& vehicles);
void sortVehiclesByPrice(std::vector<Vehicle*>& vehicles);
Vehicle* searchVehiclesByVehicleId(const std::vector<Vehicle*>& vehicles, int searchId);

#endif 
