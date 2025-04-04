#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle {
protected:
    string type;
    int speed;            // Speed in km/h
    int offroadCapability; // Scale 1-5 (higher is better)

public:
    Vehicle(string t, int s, int offroad) : type(t), speed(s), offroadCapability(offroad) {}

    virtual string getType() { return type; }
    virtual int getSpeed() { return speed; }
    virtual int getOffroadCapability() { return offroadCapability; }
};

#endif
