// main-2-2.cpp

#include <iostream>
#include "Airplane.h"

int main() {
  
    Airplane airplane(5000, 100);

  
    std::cout << "Weight: " << airplane.getWeight() << " kg\n";
    std::cout << "Fuel: " << airplane.getFuel() << "%\n";
    std::cout << "Number of Flights: " << airplane.getNumberOfFlights() << "\n";
    std::cout << "Number of Passengers: " << airplane.getNumPassengers() << "\n";

    airplane.fly(65, 120);

    std::cout << "Fuel after flying: " << airplane.getFuel() << "%\n";
    std::cout << "Number of Flights after flying: " << airplane.getNumberOfFlights() << "\n";
    std::cout << "Number of Passengers after flying: " << airplane.getNumPassengers() << "\n";

    
    airplane.setFuel(10.0);
    airplane.fly(30, 5); 

  
    std::cout << "Fuel after second flight attempt: " << airplane.getFuel() << "%\n";
    std::cout << "Number of Flights after second flight attempt: " << airplane.getNumberOfFlights() << "\n";
    std::cout << "Number of Passengers after second flight attempt: " << airplane.getNumPassengers() << "\n";

    return 0;
}
