#ifndef BATTERY_H
#define BATTERY_H

#include <iostream>
#include <string>
using namespace std;

class Battery {
private:
    double capacity;
    double chargeLevel;
    double voltage;
    double temperature;
    double params[3];

public:
    Battery();
    Battery(double cap, double charge, double volt, double temp);

    void charge();
    void discharge();
    double getCapacity();
    double getChargeLevel();
    double getVoltage();
    double getTemperature();

    double& operator[](int index);
    string operator*();
    Battery* operator->();
    friend istream& operator>>(istream& in, Battery& b);
    friend ostream& operator<<(ostream& out, Battery& b);
    Battery& operator++();
    Battery& operator--();
    Battery& operator=(const Battery& b);
};

#endif
