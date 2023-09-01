#include <iostream>
#include <vector>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "Vehicle.h"

int main() {
  std::vector<Vehicle*> vehicles;

  int numCars, numBuses, numMotorbikes;
  std::cout << "Enter Number of Cars: ";
  std::cin >> numCars;

  std::cout << "Enter Number of busses: ";
  std::cin >> numBuses;

  std::cout << "Enter Number of Motorbikes: ";
  std::cin >> numMotorbikes;

  for (int i = 1; i <= numCars; ++i) {
    vehicles.push_back(new Car(i));
  }

  for (int i = 1; i < numBuses; ++i) {
    vehicles.push_back(new Bus(i));
  }

  for (int i = 1; i < numMotorbikes; ++i) {
    vehicles.push_back(new Motorbike(i));
  }

  std::cout << "Parking duration: \n";

  for (const Vehicle* vehicle : vehicles) {
    std::cout << "Vehicle ID: " << vehicle->getID()
              << ", Parking Duration: " << vehicle->getParkingDuration()
              << " seconds" << std::endl;

    delete vehicle;
  }

  return 0;
}
