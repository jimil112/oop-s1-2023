// main-1-1.cpp

#include <iostream>

#include "AirVehicle.h"

int main() {
  AirVehicle airVehicle(500);

  std::cout << "Weight: " << airVehicle.getWeight() << " kg\n";
  std::cout << "fuel: " << airVehicle.getFuel() << "%\n";
  std::cout << "number of Flights: " << airVehicle.getNumberOfFlights() << "\n";

  airVehicle.fly(20, 30);

  std::cout << "number of flights after flying: "
            << airVehicle.getNumberOfFlights() << "\n";

  airVehicle.refuel();

  std::cout << "fuel after refueling: " << airVehicle.getFuel() << "%\n";

  return 0;
}
