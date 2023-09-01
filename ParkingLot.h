#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include "Vehicle.h"

class ParkingLot {
    private:
    int maximum_vehicle_capacity;
    int current_vehicle_count;
    std::vector<Vehicle*> vehicles;

    public:
    ParkingLot(int capacity);
    ~ParkingLot();

    int getMaxCapacity() const;
    int getCount() const;
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int countOverstayingVehicles(int maximum_parking_duration) const;
};

#endif