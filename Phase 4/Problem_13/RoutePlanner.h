#ifndef ROUTEPLANNER_H
#define ROUTEPLANNER_H

#include <iostream>
#include <string>
using namespace std;

enum TrafficCondition { LOW, MEDIUM, HIGH };
enum RoadCondition { GOOD, AVERAGE, BAD };

template <typename T>
class RoutePlanner {
private:
    string startLocation;
    string endLocation;
    TrafficCondition traffic;
    RoadCondition road;

public:
    RoutePlanner(string start, string end, TrafficCondition t, RoadCondition r)
        : startLocation(start), endLocation(end), traffic(t), road(r) {}

    void planRoute(T vehicle) {
        try {
            cout << "Planning route for a " << vehicle.getType() << " from " 
                 << startLocation << " to " << endLocation << "...\n";

            if (traffic == HIGH && vehicle.getSpeed() < 50) {
                throw runtime_error("Heavy traffic detected! Route may take longer.");
            }
            if (road == BAD && vehicle.getOffroadCapability() < 3) {
                throw runtime_error("Road is too bad for this vehicle!");
            }

            cout << "Route successfully planned with estimated time: " 
                 << calculateETA(vehicle) << " minutes.\n";
        } 
        catch (const runtime_error &e) {
            cerr << "Error: " << e.what() << endl;
        }
    }

    int calculateETA(T vehicle) {
        int baseTime = 100;
        if (traffic == LOW) baseTime -= 20;
        if (traffic == HIGH) baseTime += 30;
        if (road == GOOD) baseTime -= 15;
        if (road == BAD) baseTime += 25;
        return baseTime - (vehicle.getSpeed() / 2);
    }
};

#endif
