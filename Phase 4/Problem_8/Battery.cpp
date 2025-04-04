#include "Battery.h"

Battery::Battery(double cap, double charge, double volt, double temp) : capacity(cap), chargeLevel(charge), voltage(volt), temperature(temp) {}

double& Battery::operator[](const std::string& param) {
    if (param == "chargeLevel") return chargeLevel;
    if (param == "voltage") return voltage;
    if (param == "temperature") return temperature;
    throw std::invalid_argument("Invalid parameter!");
}

Battery& Battery::operator++() {
    if (chargeLevel >= capacity) throw std::overflow_error("Battery Overcharged!");
    chargeLevel += 5;
    return *this;
}

Battery& Battery::operator--() {
    if (chargeLevel <= 0) throw std::underflow_error("Battery Fully Discharged!");
    chargeLevel -= 5;
    return *this;
}

Battery& Battery::operator=(const Battery& other) {
    if (this != &other) {
        capacity = other.capacity;
        chargeLevel = other.chargeLevel;
        voltage = other.voltage;
        temperature = other.temperature;
    }
    return *this;
}

double Battery::operator*() const { return chargeLevel; }
Battery* Battery::operator->() { return this; }

std::istream& operator>>(std::istream& in, Battery& b) {
    in >> b.capacity >> b.chargeLevel >> b.voltage >> b.temperature;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Battery& b) {
    out << "Capacity: " << b.capacity << "mAh, Charge Level: " << b.chargeLevel << "%, Voltage: " << b.voltage << "V, Temperature: " << b.temperature << "°C";
    return out;
}
