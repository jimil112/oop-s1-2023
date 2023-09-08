// Airplane.cpp

#include "Airplane.h"

Airplane::Airplane() : AirVehicle(), numPassengers(0) {}

Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}

int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::reducePassengers(int x) {
    if (x >= 0) {
        numPassengers -= x;
        if (numPassengers < 0) {
            numPassengers = 0;
        }
    }
}

void Airplane::fly(int headwind, int minutes) {
    float fuelConsumptionRate = 0.0025; // 0.25%
    if (headwind >= 60) {
        fuelConsumptionRate = 0.005; 
    }

   
    float passengerFuelConsumption = 0.00001 * numPassengers; 

    
    float fuelConsumed = (fuelConsumptionRate + passengerFuelConsumption) * minutes;

    
    if (get_fuel() - fuelConsumed >= 20.0) {
        set_fuel(get_fuel() - fuelConsumed); 
        AirVehicle::fly(headwind, minutes); 
    }
}
