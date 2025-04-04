#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(string mk = "", string mdl = "", int yr = 0);
    virtual void displayDetails();
};

class Car : virtual public Vehicle {
protected:
    int numberOfDoors;
public:
    Car(string mk = "", string mdl = "", int yr = 0, int doors = 4);
    void displayCarDetails();
};

class Truck : virtual public Vehicle {
protected:
    double loadCapacity;
public:
    Truck(string mk = "", string mdl = "", int yr = 0, double loadCap = 0.0);
    void displayTruckDetails();
};

class Electric {
protected:
    double batteryCapacity;
    double chargeLevel;
public:
    Electric(double batteryCap = 0.0, double chargeLvl = 0.0);
    virtual void displayElectricDetails();
};

class ElectricCar : public Car, public Electric {
private:
    string ecoMode;
public:
    ElectricCar(string mk, string mdl, int yr, int doors, double batteryCap, double chargeLvl, string eco);
    void displayAllDetails();
};

class ElectricTruck : public Truck, public Electric {
private:
    double range;
public:
    ElectricTruck(string mk, string mdl, int yr, double loadCap, double batteryCap, double chargeLvl, double rng);
    void displayAllDetails();
};

#endif
