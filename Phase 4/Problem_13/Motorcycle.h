#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {
public:
    Motorcycle() : Vehicle("Motorcycle", 100, 2) {} // High speed, but low offroad capability
};

#endif
