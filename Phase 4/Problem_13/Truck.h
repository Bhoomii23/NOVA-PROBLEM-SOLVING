#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
public:
    Truck() : Vehicle("Truck", 60, 4) {} // Truck has lower speed but better offroad capability
};

#endif
