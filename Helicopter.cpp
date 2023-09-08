// Helicopter.cpp

#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w), name(n) {}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(const std::string& n) {
    name = n;
}

void Helicopter::fly(int headwind, int minutes) {
 d
    float fuelConsumptionRate = 0.0018; 
    if (headwind >= 40) {
        fuelConsumptionRate = 0.004; 
    }

   
    int weightDifference = get_weight() - 5670;
    if (weightDifference > 0) {
        fuelConsumptionRate += 0.0001 * weightDifference; 
    }

    
    float fuelConsumed = fuelConsumptionRate * minutes;

  
    if (get_fuel() - fuelConsumed >= 20.0) {
        set_fuel(get_fuel() - fuelConsumed); 
        AirVehicle::fly(headwind, minutes); 
    }
}
