#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include <vector>

class Vehicle {
protected:
    int vehicleId;
    std::string make;
    std::string model;
    double price;
public:
    Vehicle(int id, std::string mk, std::string mdl, double pr);
    virtual ~Vehicle() {}
    virtual void displayDetails() const;
    int getVehicleId() const;
    double getPrice() const;
};

class Car : public Vehicle {
private:
    std::string engineType;
public:
    Car(int id, std::string mk, std::string mdl, double pr, std::string eng);
    void displayDetails() const override;
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
public:
    Truck(int id, std::string mk, std::string mdl, double pr, double capacity);
    void displayDetails() const override;
};


void displayVehicleDetails(const std::vector<Vehicle*>& vehicles);
void sortVehiclesByPrice(std::vector<Vehicle*>& vehicles);
Vehicle* searchVehicleById(const std::vector<Vehicle*>& vehicles, int id);

#endif
