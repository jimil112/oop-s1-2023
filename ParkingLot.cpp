#include "ParkingLot.h"

#include <iostream>

ParkingLot::ParkingLot(int capacity_of_vehicle)
    : maximum_vehicle_capacity(capacity_of_vehicle), current_vehicle_count(0) {
  vehicles.reserve(maximum_vehicle_capacity);
}

ParkingLot::~ParkingLot() {
  for (Vehicle* vehicle : vehicles) {
    delete vehicle;
  }
}

int ParkingLot::getMaxCapacity() const { return maximum_vehicle_capacity; }

int ParkingLot::getCount() const { return current_vehicle_count; }

void ParkingLot::parkVehicle(Vehicle* vehicle) {
  if (current_vehicle_count < maximum_vehicle_capacity) {
    vehicles.push_back(vehicle);
    current_vehicle_count++;
  } else {
    std::cout << "The lot is full" << std::endl;
  }
}

void ParkingLot::unparkVehicle(int id) {
  for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
    if ((*it)->getID() == id) {
      delete *it;
      vehicles.erase(it);
      current_vehicle_count--;
      return;
    }
  }

  std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maximum_parking_duration) const {
  int overstaying_vehicle_count = 0;
  for (const Vehicle* vehicle : vehicles) {
    if (vehicle->getParkingDuration() > maximum_parking_duration) {
      overstaying_vehicle_count++;
    }
  }
  return overstaying_vehicle_count;
}