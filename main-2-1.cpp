// main-2-1.cpp

#include <iostream>
#include "Helicopter.h"

int main() {
    // Create a Helicopter
    Helicopter helicopter(5690, "BlackHawk");

    // Simulate a flight
    int headwind = 45;
    int minutes = 10;
    helicopter.fly(headwind, minutes);

    // Access attributes
    std::string name = helicopter.get_name();
    int weight = helicopter.get_weight();
    float fuel = helicopter.get_fuel();
    int numberOfFlights = helicopter.get_numberOfFlights();

    return 0;
}
