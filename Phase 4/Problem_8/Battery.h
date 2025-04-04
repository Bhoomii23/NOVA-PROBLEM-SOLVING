#ifndef BATTERY_H
#define BATTERY_H

#include <iostream>
#include <stdexcept>

class Battery {
private:
    double capacity, chargeLevel, voltage, temperature;
public:
    Battery(double cap = 0, double charge = 0, double volt = 0, double temp = 0);

    double& operator[](const std::string& param);
    Battery& operator++();
    Battery& operator--();
    Battery& operator=(const Battery& other);
    double operator*() const;
    Battery* operator->();

    friend std::istream& operator>>(std::istream& in, Battery& b);
    friend std::ostream& operator<<(std::ostream& out, const Battery& b);

    void charge();
    void discharge();
    double getCapacity() const;
    double getChargeLevel() const;
    double getVoltage() const;
    double getTemperature() const;
};

#endif
