#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <stdexcept>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(string m, string mo, int y) : make(m), model(mo), year(y) {}
    virtual void displayDetails() const;
    virtual ~Vehicle() {}
};

class Car : virtual public Vehicle {
public:
    Car(string m, string mo, int y) : Vehicle(m, mo, y) {}
    void displayDetails() const override;
};

class Truck : virtual public Vehicle {
public:
    Truck(string m, string mo, int y) : Vehicle(m, mo, y) {}
    void displayDetails() const override;
};

class Electric {
protected:
    double batteryCapacity;
    double chargeLevel;
public:
    Electric(double bc, double cl);
    virtual void displayElectricDetails() const;
    virtual ~Electric() {}
};

class ElectricCar : public Car, public Electric {
public:
    ElectricCar(string m, string mo, int y, double bc, double cl);
    void displayDetails() const override;
};

class ElectricTruck : public Truck, public Electric {
public:
    ElectricTruck(string m, string mo, int y, double bc, double cl);
    void displayDetails() const override;
};

#endif
