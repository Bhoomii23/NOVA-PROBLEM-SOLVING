#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <stdexcept>
using namespace std;

enum class EngineType { PETROL, DIESEL, ELECTRIC, HYBRID };

class Engine {
private:
    EngineType type;
    double capacity;
public:
    Engine(EngineType t, double c);
    EngineType getType() const;
    double getCapacity() const;
};

class Vehicle {
protected:
    string make;
    string model;
    int year;
    double price;
    Engine engine;
public:
    Vehicle(string m, string mo, int y, double p, Engine e);
    virtual double calculateMileage() const = 0;
    virtual void printDetails() const;
    friend void displayOutput(const Vehicle& v);
    virtual ~Vehicle() {}
};

class TouristVehicle : public Vehicle {
private:
    int seats;
    string transmission;
public:
    TouristVehicle(string m, string mo, int y, double p, Engine e, int s, string t);
    double calculateMileage() const override;
    void printDetails() const override;
};

class PrivateVehicle : public Vehicle {
private:
    int doors;
    string transmission;
public:
    PrivateVehicle(string m, string mo, int y, double p, Engine e, int d, string t);
    double calculateMileage() const override;
    void printDetails() const override;
};

#endif
