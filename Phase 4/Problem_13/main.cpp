#include "RoutePlanner.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"

int main() {
    RoutePlanner<Car> carRoute("City A", "City B", MEDIUM, GOOD);
    RoutePlanner<Truck> truckRoute("City C", "City D", HIGH, BAD);
    RoutePlanner<Motorcycle> bikeRoute("City E", "City F", LOW, AVERAGE);

    Car car;
    Truck truck;
    Motorcycle bike;

    cout << "-------------------\n";
    carRoute.planRoute(car);
    cout << "-------------------\n";
    truckRoute.planRoute(truck);
    cout << "-------------------\n";
    bikeRoute.planRoute(bike);
    cout << "-------------------\n";

    return 0;
}

