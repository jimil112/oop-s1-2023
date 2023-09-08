// main-1-1.cpp

#include "AirVehicle.h"

int main() {
    AirVehicle airVehicle;
    
    // Testing the methods
    airVehicle.set_weight(5000);
    airVehicle.set_fuel(75.0);
    airVehicle.set_numberOfFlights(2);
    
    airVehicle.refuel();
    airVehicle.fly(20, 30);
    
    int weight = airVehicle.get_weight();
    float fuel = airVehicle.get_fuel();
    int numberOfFlights = airVehicle.get_numberOfFlights();
    
    return 0;
}
