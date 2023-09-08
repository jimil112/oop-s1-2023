// main-3-1.cpp

#include <iostream>
#include "AirFleet.h"

int main() {
    AirFleet airFleet;

    // Access the fleet and perform operations if needed
    AirVehicle** fleet = airFleet.get_fleet();

    // Ensure the objects are created and accessible
    for (int i = 0; i < 5; i++) {
        std::cout << "Object " << i + 1 << ": ";
        if (dynamic_cast<Airplane*>(fleet[i])) {
            std::cout << "Airplane\n";
        } else if (dynamic_cast<Helicopter*>(fleet[i])) {
            std::cout << "Helicopter\n";
        } else {
            std::cout << "Unknown Type\n";
        }
    }

    return 0;
}
