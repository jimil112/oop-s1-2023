// main-3-1.cpp

#include <iostream>
#include "AirFleet.h"
#include "Airplane.h" 
#include "Helicopter.h" 

int main() {
    AirFleet airFleet;

    
    AirVehicle** fleet = airFleet.get_fleet();

    for (int i = 0; i < 5; i++) {
     
        std::cout << "Vehicle " << i + 1 << " Type: ";
        if (dynamic_cast<Airplane*>(fleet[i])) {
            std::cout << "Airplane\n";
        } else if (dynamic_cast<Helicopter*>(fleet[i])) {
            std::cout << "Helicopter\n";
        } else {
            std::cout << "Unknown Vehicle Type\n";
        }
    }

    return 0;
}
