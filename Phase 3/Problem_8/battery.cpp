#include "battery.h"

Battery::Battery() : capacity(0), chargeLevel(0), voltage(0), temperature(0) {
    params[0] = params[1] = params[2] = 0;
}

Battery::Battery(double cap, double charge, double volt, double temp)
    : capacity(cap), chargeLevel(charge), voltage(volt), temperature(temp) {
    params[0] = 0; params[1] = 0; params[2] = temp;
}

void Battery::charge() {
    chargeLevel += 5;
    if (chargeLevel > capacity) chargeLevel = capacity;
    cout << "Battery charged to " << chargeLevel << "%\n";
}

void Battery::discharge() {
    chargeLevel -= 5;
    if (chargeLevel < 0) chargeLevel = 0;
    cout << "Battery discharged to " << chargeLevel << "%\n";
}

double Battery::getCapacity() { return capacity; }
double Battery::getChargeLevel() { return chargeLevel; }
double Battery::getVoltage() { return voltage; }
double Battery::getTemperature() { return temperature; }

double& Battery::operator[](int index) {
    if (index >= 0 && index < 3)
        return params[index];
    else
        throw out_of_range("Index out of range");
}

string Battery::operator*() {
    return "Charge Level: " + to_string(chargeLevel) +
           "%, Voltage: " + to_string(voltage) +
           "V, Temperature: " + to_string(temperature) + "°C";
}

Battery* Battery::operator->() {
    return this;
}

istream& operator>>(istream& in, Battery& b) {
    cout << "Enter capacity: "; in >> b.capacity;
    cout << "Enter charge level: "; in >> b.chargeLevel;
    cout << "Enter voltage: "; in >> b.voltage;
    cout << "Enter temperature: "; in >> b.temperature;
    b.params[2] = b.temperature;
    return in;
}

ostream& operator<<(ostream& out, Battery& b) {
    out << "Capacity: " << b.capacity << " mAh\n"
        << "Charge Level: " << b.chargeLevel << "%\n"
        << "Voltage: " << b.voltage << " V\n"
        << "Temperature: " << b.temperature << " °C\n";
    return out;
}

Battery& Battery::operator++() {
    chargeLevel += 1;
    if (chargeLevel > capacity) chargeLevel = capacity;
    return *this;
}

Battery& Battery::operator--() {
    chargeLevel -= 1;
    if (chargeLevel < 0) chargeLevel = 0;
    return *this;
}

Battery& Battery::operator=(const Battery& b) {
    if (this != &b) {
        capacity = b.capacity;
        chargeLevel = b.chargeLevel;
        voltage = b.voltage;
        temperature = b.temperature;
        params[0] = b.params[0];
        params[1] = b.params[1];
        params[2] = b.params[2];
    }
    return *this;
}
