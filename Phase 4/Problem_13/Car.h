#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car() : Vehicle("Car", 80, 3) {} // Car has moderate speed and offroad capability
};

#endif
