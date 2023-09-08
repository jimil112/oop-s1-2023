// main-2-1.cpp

#include <iostream>

#include "Helicopter.h"

int main() {
  Helicopter helicopter(6000, "Heli1");

  std::cout << "weight: " << helicopter.getWeight() << " kg\n";
  std::cout << "fuel: " << helicopter.getFuel() << "%\n";
  std::cout << "number of flights: " << helicopter.getNumberOfFlights() << "\n";
  std::cout << "name: " << helicopter.getName() << "\n";

 
  helicopter.fly(45,10);

  std::cout <<"Fuel After flying: " << helicopter.getFuel() << "%\n";
  std::cout <<" number of flights after flying:" << helicopter.getNumberOfFlights() << "\n";

  helicopter.setFuel(10.0);
  helicopter.fly(30, 5);

  std::cout << "Fuel after attempted second flight: " << helicopter.getFuel()<<"%\n";
  
  std::cout << "Number of Flights after attempted second flight: " << helicopter.getNumberOfFlights() << "\n";

  return 0;
}
